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

void solve(string s)
{
    int len = s.size();
    for(int i = 0; i < len; i++)
    {
        int cnt = 1;
        int j = i + 1;
        while(s[i] == s[j] && j < len)
        {
            cnt++;
            j++;
        }
        i += (j - i) - 1;
        cout << s[i] << cnt;
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        solve(s);
    }
}