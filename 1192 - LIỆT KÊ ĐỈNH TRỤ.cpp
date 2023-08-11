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

void DFS(int u, bool visited[], vi a[])
{
    if(visited[u]) return;
    visited[u] = true;
    for(vi::iterator it = a[u].begin(); it != a[u].end(); it++)
    {
        if(!visited[*it]) DFS(*it, visited, a);
    }
}

void dinhtru(vi a[], int v, bool visited[])
{
    int ans = 0;
    int tplt = 0;
    FOR(i, 1, v) visited[i] = 0;
    FOR(i, 1, v)
    {
        if(!visited[i]) 
        {
            tplt++;
            DFS(i, visited, a);
        }
    }

    FOR(i, 1, v)
    {
        FOR(j, 1, v) visited[j] = 0;
        visited[i] = true;
        int dem = 0;
        FOR(j, 1, v)
        {
            if(!visited[j]) 
            {
                dem++;
                DFS(j, visited, a);
            }
        }
        if(dem > tplt) cout << i << " ";
    }
}

int main()
{
    faster();
    int t; cin >> t;
    int v, e, x, y;
    while(t--)
    {
        cin >> v >> e;
        vi a[v + 1];
        bool visited[v + 1];
        FOR(i, 1, e)
        {
            cin >> x >> y;
            a[x].pb(y);
            a[y].pb(x);
        }
        dinhtru(a, v, visited);
        cout << endl;
    }
}