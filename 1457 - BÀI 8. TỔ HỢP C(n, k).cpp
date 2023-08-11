#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define PI 3.141592653589793238
#define endl '\n'

const ll mod = 1e9 + 7;
int n, k;
ll a[1005][1005];

void solve()
{
    a[1][0] = 1;
    a[1][1] = 1;
    for(int i = 2; i <= 1000; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i) a[i][j] = 1;
            else a[i][j] = (a[i - 1][j - 1] + a[i - 1][j]) % mod;
        }
    }
}

int main()
{
    faster();
    int t; cin >> t;
    solve();
    while(t--)
    {
        cin >> n >> k;
        cout << a[n][k] << endl;
    }
}