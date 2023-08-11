#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <iterator>
#include <string>
#define ll long long
#define Sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';
using namespace std;

int IsPrime(ll n)
{
    ll sqr = sqrt(n);
    for(int i = 2; i <= sqr; i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

int solve(ll n)
{
    ll sqr = sqrt(n);
    if(sqr * sqr != n) return 0;
    if(IsPrime(n)) return 1;
    return 0;
}

int main()
{
    Sync
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int res = 0;
        map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            m[x]++;
        }
        for(map<int, int>::iterator it = m.begin(); it != m.end(); it++)
        {
            int p = it->first;
            if(m[p] % 2 == 1) cout << p << " ";
        }
        cout << '\n';
    }
}