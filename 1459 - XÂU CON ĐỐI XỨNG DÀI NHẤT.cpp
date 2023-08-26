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

int dp[1005][1005];

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int len = s.size();
        int res = 1;
        memset(dp, 0, sizeof(dp));
        FOR(i, 0, len - 1) dp[i][i] = 1;
        FOR(k, 1, len - 1)
        {
            FOR(i, 0, len - k - 1)
            {
                int j = i + k;
                if(k == 1 && s[i] == s[j]) dp[i][j] = 1;
                else if(s[i] == s[j] && k > 1) dp[i][j] = dp[i + 1][j - 1];
                else dp[i][j] = 0;
                if(dp[i][j]) res = max(res, j - i + 1);
            }
        }
        cout << res << endl;
    }
}