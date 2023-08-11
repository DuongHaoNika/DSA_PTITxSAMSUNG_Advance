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

bool check;

void DFS(int u, int n, vector<bool> &visited, vi a[], int cnt = 1)
{
    if(check) return;
    visited[u] = 1;
    for(int i : a[u])
    {
        if(visited[i] == 1 && i == n && cnt > 2)
        {
            check = 1;
            return;
        }
        if(!visited[i]) DFS(i, n, visited, a, cnt + 1);
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    int e, v, x, y;
    while(t--)
    {
        cin >> v >> e;
        vi a[v + 1];
        FOR(i, 1, e)
        {
            cin >> x >> y;
            a[x].pb(y);
            a[y].pb(x);
        }
        check = 0;
        FOR(i, 1, v)
        {
            vector<bool> visited(v + 1, 0);
            DFS(i, i, visited, a, 1);
            if(check) break;
        }
        if(check) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
