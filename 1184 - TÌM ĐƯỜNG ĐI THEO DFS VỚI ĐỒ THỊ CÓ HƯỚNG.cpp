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

void DFS(int u, int trace[], bool visited[], vi a[])
{
    if(visited[u]) return;
    visited[u] = 1;
    for(int i : a[u])
    {
        if(!visited[i])
        {
            trace[i] = u;
            DFS(i, trace, visited, a);
        }
    }
}

void findPath(int start, int end, int trace[])
{
    vi path;
    if(!trace[end]) cout << -1;
    else
    {
        while(end != start)
        {
            path.pb(end);
            end = trace[end];
        }
        path.pb(end);
        reverse(path.begin(), path.end());
        for(int i : path) cout << i << ' ';
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    int start, end, e, v, x, y;
    while(t--)
    {
        cin >> v >> e >> start >> end;
        vi a[v + 1];
        bool visited[v + 1];
        int trace[v + 1];
        FOR(i, 1, v)
        {
            visited[i] = 0;
            trace[i] = 0;
        }
        FOR(i, 1, e)
        {
            cin >> x >> y;
            a[x].pb(y);
        }
        DFS(start, trace, visited, a);
        findPath(start, end, trace);
        cout << endl;
    }
    return 0;
}