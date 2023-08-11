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

string s;
int k;

void findMax(string &res, int cnt)
{
    if(!k) return;
    char tmp = s[cnt];
    F(i, cnt, s.length()) if(tmp < s[i]) tmp = s[i];
    if(tmp != s[cnt]) --k;
    FORD(i, s.length() - 1, cnt)
    {
        if (s[i] == tmp)
        {
            swap(s[cnt], s[i]);
            if(s.compare(res) > 0) res = s;
            findMax(res, cnt + 1);
            swap(s[cnt], s[i]);
        }
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> k >> s;
        string res = s;
        findMax(res, 0);
        cout << res << endl;
    }
    return 0;
}