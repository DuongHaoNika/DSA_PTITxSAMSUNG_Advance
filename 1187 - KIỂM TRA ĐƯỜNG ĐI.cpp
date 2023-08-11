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

void DFS(int u, bool visited[], vi a[], int trace[])
{
    if(visited[u]) return;
    visited[u] = true;
    for(vi::iterator it = a[u].begin(); it != a[u].end(); it++)
    {
        if(!visited[*it])
        {
            trace[*it] = u;
            DFS(*it, visited, a, trace);
        }
    }
}

int main()
{
    faster();
    int t; cin >> t;
    int n, m, x, y, start, end, q;
    while(t--)
    {   
        cin >> n >> m;
        vi a[n + 5];
        bool visited[n + 5];
        int trace[n + 5];

        FOR(i, 1, m)
        {
            cin >> x >> y;
            a[x].pb(y);
            a[y].pb(x);
        }
        cin >> q;
        while(q--)
        {
            FOR(i, 1, n)
            {
                trace[i] = 0;
                visited[i] = 0;
            }

            cin >> start >> end;
            DFS(start, visited, a, trace);
            if(!trace[end]) cout << "NO\n";
            else cout << "YES\n"; 
        }
    }
}