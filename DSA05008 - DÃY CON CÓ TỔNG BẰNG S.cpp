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

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        vector<bool> dp(k + 1, false);
        dp[0] = true;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            for(int j = k; j >= a[i]; j--)
            {
                if(dp[j - a[i]]) dp[j] = true;
            }
        }
        if(dp[k]) cout << "YES\n";
        else cout << "NO\n";
    }
}