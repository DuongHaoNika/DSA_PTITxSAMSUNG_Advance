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
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

vector<int> a[1005];
bool visited[1005];

void BFS(int s, int trace[])
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    int tmp;
    while (!q.empty())
    {
        tmp = q.front();
        q.pop();

        for (vector<int>::iterator it = a[tmp].begin(); it != a[tmp].end(); it++)
        {
            if (!visited[*it])
            {
                q.push(*it);
                visited[*it] = true;
                trace[*it] = tmp;
            }
        }
    }
}

void findPath(int end, int trace[])
{
    vi path;
    if(!trace[end]) cout << -1;
    else
    {
        do
        {
            path.pb(end);
            end = trace[end];
        }
        while(trace[end]);
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
    int v, e, first, last;
    while (t--)
    {
        int trace[1005] = {};
        cin >> v >> e >> first >> last;
        int x, y;
        FOR(i, 1, v) a[i].clear();
        memset(visited, false, v + 5);
        FOR(i, 1, e)
        {
            cin >> x >> y;
            a[x].push_back(y);
        }
        BFS(first, trace);
        findPath(last, trace);
        cout << endl;
    }
}