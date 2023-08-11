#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int len = s.size();
    for(int i = 0; i < len; i++)
    {
        if(s[i] < '0' || s[i] > '2')
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s; cin >> s;
        solve(s);
    }
}