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

int main()
{
    faster();
    int n; cin >> n;
    int a[n + 5];
    FOR(i, 0, n - 1) cin >> a[i];
    sort(a, a + n);
    ll res = 1;
    ll res2 = 1;
    res2 *= a[0] * a[1];
    ll maxB = max(a[2], a[n - 1]);
    if(maxB > 1) res2 *= maxB;
    
    res *= a[n - 1] * a[n - 2];
    if(a[n - 3] > 1) res *= a[n - 3];
    ll maxA = (res > res2) ? res : res2;
    cout << maxA;
}