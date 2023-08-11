#include <bits/stdc++.h>
#define Sync ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;

int main()
{
    Sync
    int t; cin >> t;
    while(t--)
    {
        int n, d; cin >> n >> d;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = d; i < n; i++) cout << v[i] << " ";
        for(int i = 0; i < d; i++) cout << v[i] << " ";
        cout << "\n";
    }
}