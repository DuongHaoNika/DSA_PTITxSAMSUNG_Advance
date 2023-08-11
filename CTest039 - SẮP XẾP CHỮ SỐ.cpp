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

void swap(char& a, char& b)
{
    char tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s;
        string res;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != '0') res += s[i];
        }
        for(int i = 0; i < res.size(); i++)
        {
            for(int j = i + 1; j < res.size(); j++)
            {
                if(res[i] > res[j]) swap(res[i], res[j]);
            }
        }
        cout << res << endl;
    }
}