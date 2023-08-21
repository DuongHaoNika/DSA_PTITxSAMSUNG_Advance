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
        string s; cin >> s;
        int len = s.size();
        if(len == 1) 
        {
            cout << s << endl;
            continue;
        }
        int nho = 0;
        int idx = 0;
        FORD(i, len - 1, 0)
        {
            s[i] += nho;
            nho = (s[i] - '0') / 5;
            if(nho == 1)
            {
                FOR(j, i + 1, len - 1) s[j] = '0';
            }
            else idx = i;
        }
        if(nho)
        {
            if(s[0] - '0' >= 10)
            {
                string res = "1";
                FOR(i, 1, len) res += "0";
                s = res;
            }
            else
            {
                FOR(i, 1, len) s[i] = '0';
            }
        }
        FOR(i, idx + 1, len) s[i] = '0';
        cout << s << endl;
    }
}