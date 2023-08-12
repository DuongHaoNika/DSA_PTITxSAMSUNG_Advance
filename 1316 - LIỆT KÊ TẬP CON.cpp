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

int cmp(string a, string b)
{
    return a < b;
}

int len = 0;
vector<string> res;
vector<char> v;
string s; 

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        if(j == 1)
        {
            v.pb(s[i]);
            string tmp;
            for(int u = 0; u < v.size(); u++) tmp += v[u];
            res.pb(tmp);
        }
        if(i < len - 1) Try(i + 1);
        if(j == 1) v.pop_back();
    }
}   

void In()
{
    sort(res.begin(), res.end(), cmp);
    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> len;
        cin >> s;
        Try(0);
        In();
        v.clear();
        res.clear();
    }
}