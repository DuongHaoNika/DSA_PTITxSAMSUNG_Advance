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

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll res = 0;
        FOR(i, 1, n) res += pow(2, i);
        cout << res << endl;
        FORD(i, n, 1)
        {
            string s;
            FOR(j, 1, i) s += '8';
            cout << s << " ";
            int cnt = 0;
            int tmp = pow(2, i);
            while(cnt <= tmp)
            {
                cnt++;
                FORD(j, i - 1, 0)
                {
                    int idx = -1;
                    if(s[j] == '8') 
                    {
                        idx = j;
                        s[j] = '6';
                        FOR(u, j + 1, i - 1) s[u] = '8';
                        cout << s << " ";
                        j = i;
                    }
                }
            }
        }
        cout << endl;
    }
}