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
#define PI 3.141592653589793238
#define endl '\n'

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        k--;
        int a[n + 5][m + 5];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++) cin >> a[i][j];
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(a[j][k] < a[i][k]) swap(a[i][k], a[j][k]);
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++) cout << a[i][j] << " ";
            cout << endl;
        }
    }
}