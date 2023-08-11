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

ll giaithua(ll n)
{
    if(n <= 1) return 1;
    else return n * giaithua(n - 1 );
}

int main()
{
    Sync
    int n; cin >> n;
    ll res = 0;
    for(int i = 1; i <= n; i++)
    {
        res += giaithua(i);
    }
    cout << res;
}