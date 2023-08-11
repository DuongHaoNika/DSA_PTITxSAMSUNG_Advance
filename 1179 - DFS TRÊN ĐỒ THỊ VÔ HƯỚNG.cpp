#include <bits/stdc++.h>
#define Sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int n, m, e;
vector<int> adj[1005];
bool visited[1005];

void init()
{
    cin >> n >> m >> e;
    int x, y; 
    for(int i = 1; i <= n; i++) adj[i].clear();
    for(int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, n + 5);
}

void dfs(int u)
{
    cout << u << " ";
    visited[u] = true;
    for(vector<int>::iterator it = adj[u].begin(); it != adj[u].end(); it++)
    {
        if(!visited[*it]) dfs(*it); 
    }
}

int main()
{
    Sync
    int t; cin >> t;
    while(t--)
    {
        init();
        dfs(e);
        cout << "\n";
    }
}