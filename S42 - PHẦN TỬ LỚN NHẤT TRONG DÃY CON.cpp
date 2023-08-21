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
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n + 5];
        FOR(i, 1, n) cin >> a[i];
        deque<int> dq;
        FOR(i, 1, n)
        {
            while(!dq.empty() && a[dq.back()] <= a[i]) dq.pop_back();
            while(!dq.empty() && dq.front() <= i - k) dq.pop_front();
            dq.push_back(i);
            if(i >= k) cout << a[dq.front()] << " ";
        }
        cout << endl;
    }
}