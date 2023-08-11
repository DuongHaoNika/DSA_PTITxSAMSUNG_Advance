#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n + 5];
    for(int i = 1; i <= k; i++) cin >> a[i];
    int idx = -1;
    for(int i = k; i > 1; i--)
    {
        if(a[i] - 1 > a[i - 1] ) 
        {
            idx = i;
            break;
        }
    }
    if(idx > 0) 
    {
        a[idx]--;
        for(int i = idx + 1; i <= k; i++) a[i] = n - k + i;
    }
    else
    {
        if(a[1] != 1)
        {
            a[1]--;
            for(int i = 2; i <= k; i++) a[i] = n - k + i;
        }
        else
        {
            for(int i = k; i >= 1; i--) a[i] = n - k + i;
        }
    }
    for(int i = 1; i <= k; i++) cout << a[i] << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}