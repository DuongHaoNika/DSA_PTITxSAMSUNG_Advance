#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <iterator>
#include <string>
#define ll long long
#define Sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int a[15][15];
int n;
vector <string> v;

void init()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cin >> a[i][j];
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
    if(i < n && a[i + 1][j] == 1)
    {
        Try(i + 1, j, s + "D");
    }
    if(j < n && a[i][j + 1] == 1)
    {
        Try(i, j + 1, s + "R");
    }
    if(i < n && j < n && a[i + 1][j] && a[i][j + 1] || i > n || j > n) return;
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
    Sync
    int t; cin >> t;
    while(t--)
    {
        init();
        Try(1, 1, "");
        in();
    }
}