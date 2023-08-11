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

int v, e, u;
vector<int> a[1005];
bool visited[1005];

void init()
{
    cin >> v >> e >> u;
    FOR(i, 1, v) a[i].clear();
    memset(visited, false, v + 5);

    int x, y;
    FOR(i, 1, e)
    {
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}

void BFS(int s)
{
    queue<int> q;
    q.push(s);
    cout << s << " ";
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
                cout << *it << " ";
            }
        }
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        init();
        BFS(u);
        cout << endl;
    }
}