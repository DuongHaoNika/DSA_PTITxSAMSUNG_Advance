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

int a[15][15];
int n;
vector <string> v;
bool visited[15][15];

void init()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    FOR(i, 1, n)
    {
        FOR(j, 1, n) visited[i][j] = false;
    }
    v.clear();
}

void Try(int i, int j, string s)
{
    if(a[1][1] != 1) return;
    if(i == n && j == n && a[i][j] == 1)
    {
        v.push_back(s);
    }

    if((i > 1 && i <= n) && a[i - 1][j] == 1 && !visited[i - 1][j])
    {
        visited[i][j] = true;
        Try(i - 1, j, s + "U");
        visited[i][j] = false;
    }
    if(i < n && a[i + 1][j] == 1 && !visited[i + 1][j])
    {
        visited[i][j] = true;
        Try(i + 1, j, s + "D");
        visited[i][j] = false;
    }
    if(j > 1 && j <= n && a[i][j - 1] == 1 && !visited[i][j - 1])
    {
        visited[i][j] = true;
        Try(i, j - 1, s + "L");
        visited[i][j] = false;
    }
    if(j < n && a[i][j + 1] == 1 && !visited[i][j + 1])
    {
        visited[i][j] = true;
        Try(i, j + 1, s + "R");
        visited[i][j] = false;
    }
}

void in()
{
    if(v.size() > 0)
    {
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    else cout << "-1\n";
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        init();
        Try(1, 1, "");
        in();
    }
}