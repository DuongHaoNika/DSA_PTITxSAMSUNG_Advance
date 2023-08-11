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
    int a[n + 5][n + 5];
    int l = 0, r = n - 1, top = 0, bot = n - 1;
    int res = 1;
    while(l <= r && top <= bot)
    {
        for(int i = l; i <= r; i++) a[top][i] = res++;
        top++;
        for(int i = top; i <= bot; i++) a[i][r] = res++;
        r--;
        if(l <= r && top <= bot)
        {
            for(int i = r; i >= l; i--) a[bot][i] = res++;
            bot--;
            for(int i = bot; i >= top; i--) a[i][l] = res++;
            l++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) cout << a[i][j] << " ";
        cout << "\n";
    }
}