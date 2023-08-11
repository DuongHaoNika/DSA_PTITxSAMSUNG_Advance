#include <bits/stdc++.h>
#define Sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    Sync
    int t; cin >> t;
    while(t--)
    {
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        ll res = 0;
        int n; cin >> n;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            pq.push(x);
        }

        while(pq.size() > 1)
        {
            ll tmp = pq.top();
            pq.pop();
            tmp += pq.top();
            pq.pop();
            res += tmp;
            pq.push(tmp);
        }
        cout << res << "\n";
    }
}