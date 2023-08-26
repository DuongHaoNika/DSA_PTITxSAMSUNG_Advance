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

void Try(ll tu, ll mau)
{
    if(mau % tu == 0)
    {
        cout << 1 << "/" << mau / tu << endl;
        return;
    }
    ll x = mau/tu + 1;
    cout << 1 << "/" << x << " + ";
    ll mau_n = x * mau;
    ll tu_n = tu * x - mau;
    Try(tu_n, mau_n);
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        ll tu, mau; cin >> tu >> mau;
        Try(tu, mau);
    }
}