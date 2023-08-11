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

int n, m;
int parent[101], sizeN[101];

struct edge
{
    int u, v, w;
};

vector<edge> res;

void make_set()
{
    FOR(i, 1, n)
    {
        parent[i] = i;
        sizeN[i] = 1;
    }
}

int find(int v)
{
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}

bool Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if(a == b) return false;
    if(sizeN[a] < sizeN[b]) swap(a, b);
    parent[b] = a;
    sizeN[a] += sizeN[b];
    return true;
}

void init()
{
    cin >> n >> m;
    int x, y, z;
    FOR(i, 0, m - 1)
    {
        cin >> x >> y >> z;
        edge e;
        e.u = x;
        e.v = y;
        e.w = z;
        res.pb(e);
    }
}

bool cmp(edge a, edge b)
{
    return a.w < b.w;
}

void kruskal()
{
    vector<edge> mst;
    int d = 0;
    sort(res.begin(), res.end(), cmp);
    FOR(i, 0, m - 1)
    {
        if(mst.size() == n - 1) break;
        edge e = res[i];
        if(Union(e.u, e.v)) 
        {
            mst.pb(e);
            d += e.w;
        }
    }
    cout << d << endl;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        init();
        make_set();
        kruskal();
        res.clear();
    }
}