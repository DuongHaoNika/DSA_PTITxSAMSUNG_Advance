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
    if(n < 2) return 0;
    ll sqr = sqrt(n);
    for(int i = 2; i <= sqr; i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

int solve(ll n)
{
    int m = n;
    int sum = 0;
    while(n)
    {
        int k = n % 10;
        if(IsPrime(k) == 0) return 0;
        sum += k;
        n /= 10;
    }
    if(IsPrime(sum) == 0) return 0;
    if(IsPrime(m) == 0) return 0;
    return 1;
}

int main()
{
    Sync
    int t; cin >> t;
    while(t--)
    {
        int l, r; cin >> l >> r;
        int res = 0;
        for(int i = l; i <= r; i++)
        {
            if(solve(i)) res++;
        }
        cout << res << "\n";
    }
}