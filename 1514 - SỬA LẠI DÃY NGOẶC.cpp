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
        stack<char> s;
        string line; cin >> line;
        int len = line.size();
        FOR(i, 0, len - 1)
        {
            if(line[i] == '(') s.push('(');
            else
            {
                if(!s.empty())
                {
                    if(s.top() == '(') s.pop();
                    else s.push(')');
                }
                else s.push(')');
            }
        }
        int cnt1 = 0, cnt2 = 0;
        while(!s.empty())
        {
            if(s.top() == '(') cnt1++;
            else cnt2++;
            s.pop();
        }
        if(cnt1 % 2 == 1) cnt1++;
        if(cnt2 % 2 == 1) cnt2++;
        cout << (cnt1 + cnt2)/2 << endl;
    }
}