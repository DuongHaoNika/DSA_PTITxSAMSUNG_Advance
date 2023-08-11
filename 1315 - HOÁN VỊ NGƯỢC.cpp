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

int used[20] = {};
int a[20];
int n; 
vi res;

void In()
{
    FOR(i, 0, n - 1) cout << res[i];
    cout << " ";
}

void Try()
{
    for(int j = 1; j <= n; j++)
    {
        if(!used[j])
        {
            used[j] = 1;
            res.pb(a[j]);
            if(res.size() < n) Try();
            else if(res.size() == n) In();
            used[j] = 0;
            res.pop_back();
        }
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        FOR(i, 1, n) a[i] = n + 1 - i;
        Try();
        cout << endl;
    }
}