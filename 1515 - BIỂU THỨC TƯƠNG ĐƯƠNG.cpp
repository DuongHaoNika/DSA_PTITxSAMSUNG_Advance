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
        string s; cin >> s;
        int len = s.size();
        stack<int> st;
        FOR(i, 0, len - 1)
        {
            if(s[i] == '(') st.push(i);
            else if(s[i] == ')')
            {
                if(!s.empty())
                {
                    int k = st.top();
                    st.pop();
                    if(k == 0) continue;
                    if(s[k - 1] == '+') continue;
                    else if(s[k - 1] == '-')
                    {
                        FOR(j, k, i)
                        {
                            if(s[j] == '+') s[j] = '-';
                            else if(s[j] == '-') s[j] = '+';
                        }
                    }
                }
            }
        }

        FOR(i, 0, len - 1)
        {
            if(s[i] != '(' && s[i] != ')') cout << s[i];
        }
        cout << endl;
    }
}