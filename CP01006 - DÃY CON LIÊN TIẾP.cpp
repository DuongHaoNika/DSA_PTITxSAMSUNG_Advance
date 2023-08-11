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

int cmp(int a, int b)
{
    return a > b;
}

int main()
{
    Sync
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 5];
        for(int i = 0; i < n; i++) cin >> a[i];
        ll max1 = 0;;
        ll max2 = -1e9;
        for(int i = 0; i < n; i++)
        {
            max1 += a[i];
            if(max1 < 0) max1 = 0;
            if(max1 > max2) max2 = max1;
        }
        cout << max2 << '\n';
    }
}