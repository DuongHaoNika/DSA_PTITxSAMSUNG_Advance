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
#define endl '\n'

int n, m; 

ll ucln(ll a, ll b)
{
    while(a * b != 0)
    {
        if(a >= b) a %= b;
        else b %= a;
    }
    return a + b;
}

void solve(ll c[], ll b[])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            ll k = ucln(b[i], c[j]);
            if(k != 1)
            {
                b[i] /= k;
                c[j] /= k;
            }
        }
    }
}

int check(ll b[])
{
    for(int i = 0; i < n; i++)
    {
        if(b[i] != 1) return 0;
    }
    return 1;
}

int main()
{
    faster();
    cin >> n >> m;
    ll a[n + 5];
    ll c[n + 5];
    FOR(i, 0, n - 1) 
    {
        cin >> a[i];
        c[i] = a[i];
    }
    ll b[n + 5];
    int count = 0;
    vi res;
    int cnt = 1;
    while(m--)
    {
        FOR(i , 0, n - 1) cin >> b[i];
        solve(c, b);
        if(check(b) == 1)
        {
            count++;
            res.pb(cnt);
        }
        FOR(i, 0, n - 1) c[i] = a[i];
        cnt++;
    }
    cout << count << endl;
    for(int i : res) cout << i << " ";
}