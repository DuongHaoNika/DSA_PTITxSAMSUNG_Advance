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

void solve(string& s)
{
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
}

bool sosanh(string s1, string s2)
{
    string tmp1, tmp2;
    int l1 = s1.size(), l2 = s2.size();
    FOR(i, 0, l1 - 1) 
    {
        if(s1[i] != '(' && s1[i] != ')') tmp1 += s1[i];
    }
    FOR(i, 0, l2 - 1) 
    {
        if(s2[i] != '(' && s2[i] != ')') tmp2 += s2[i];
    }
    return tmp1 == tmp2;    
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        solve(s1);
        solve(s2);
        if(sosanh(s1, s2)) cout << "YES\n";
        else cout << "NO\n";
    }
}