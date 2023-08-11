#include <bits/stdc++.h>
#define Sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    Sync
    int n, k; cin >> n >> k;
    for(int i = 2; i <= n; i += 2)
    {
        int tmp = i;
        while(tmp % 2 == 0 && k > 0)
        {
            tmp /= 2;
            k--;
        }
    }
    if(k > 0) cout << "No";
    else cout << "Yes";
} 