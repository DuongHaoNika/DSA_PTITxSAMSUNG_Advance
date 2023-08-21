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

const int maxN = 1001;
vector<pair<int, int>> a[maxN];
vector<vector<ll>> res;
int v, e, first, w;
int start, ed;

void init()
{
    FOR(i, 0, maxN) a[i].clear();
    cin >> v >> e;
    int x, y, z;
    FOR(i, 1, e)
    {
        cin >> x >> y >> z;
        a[x].pb({y, z});
        a[y].pb({x, z});
    }
}

void dijkstra(int s)
{
    vll d(v + 1, 1e9);
    d[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    while(!pq.empty())  
    {
        pair<int, int> top = pq.top();
        pq.pop();
        int m = top.se;
        int n = top.fi;
        if(n > d[m]) continue;
        for(auto it : a[m])
        {
            int p = it.fi, q = it.se;
            if(d[p] > d[m] + q)
            {
                d[p] = d[m] + q;
                pq.push({d[p], p});
            }
        }
    }
    res.pb(d);
}

int main()
{
    faster();
    init();
    FOR(i, 1, v)
    {
        dijkstra(i);
    }
    int t; cin >> t;
    while(t--)
    {
        cin >> start >> ed;
        cout << res[start - 1][ed] << endl;
    }
    
}