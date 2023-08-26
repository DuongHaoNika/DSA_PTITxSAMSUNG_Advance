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

int solve(string s)
{
    if(s[0] == '0') return 0;
    int dp[50] = {};
    dp[0] = dp[1] = 1;
    int len = s.sz;
    FOR(i, 2, len)
    {
        if(s[i - 1] > '0') dp[i] = dp[i - 1];
        if(s[i - 2] == '1' || s[i - 2] == '2' && s[i - 1] <= '6') dp[i] += dp[i - 2];
    }
    return dp[len];
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        cout << solve(s) << endl;
    }
}