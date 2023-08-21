#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

bool solve(ll a, ll b)
{
    string tmp1 = to_string(a);
    string tmp2 = to_string(b);
    int len = tmp1.size();
    int cnt = 0;
    FOR(i, 0, len - 1)
    {
        while(tmp1[i] != tmp2[cnt] && cnt < tmp2.size()) cnt++;
        if(tmp1[i] == tmp2[cnt] && cnt < tmp2.size() && i == len - 1) return true;
        cnt++;
    }
    return false;
}

int main()
{
    faster();
    int t; cin >> t;
    vll v;
    FOR(i, 1, 100) v.pb(i * i * i);
    while(t--)
    {
        ll n; cin >> n;
        bool check = false;
        FORD(i, v.size() - 1, 0)
        {
            if(v[i] == n)
            {
                cout << n << endl;
                check = true;
                break;
            }
            if(v[i] < n)
            {
                if(solve(v[i], n))
                {
                    cout << v[i] << endl;
                    check = true;
                    break;
                }
            }
        }
        if(!check) cout << -1 << endl;
    }
}