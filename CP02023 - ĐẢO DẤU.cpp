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
    int n, k; cin >> n >> k;
    int cnt = 0;
    int a[n + 5];
    ll sum = 0;
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
        if(a[i] < 0) cnt++;
    }
    sort(a, a + n);
    
    FOR(i, 0, n - 1)
    {
        if(k > 0) 
        {
            if(a[i] < 0)
            {
                a[i] = abs(a[i]);
                k--;
            }
            else break;
        }
        else break;
    }

    sort(a, a + n);

    if(k % 2 == 1) k = 1;
    else k = 0;

    FOR(i, 0, n - 1)
    {
        if(k > 0)
        {
            sum -= a[i];
            k--;
        }
        else sum += a[i];
    }
    
    cout << sum << endl;
    
}