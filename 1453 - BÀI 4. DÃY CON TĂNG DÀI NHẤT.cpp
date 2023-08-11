#include <bits/stdc++.h>
#define Sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int max(int a, int b)
{
    if(a > b) return a;
    return b;
}

int main()
{
    Sync
    int n; cin >> n;
    int a[n + 5];
    int l[n + 5];
    int res = 1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        l[i] = 1;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[i] > a[j]) 
            {
                l[i] = max(l[i], l[j] + 1);
                if(l[i] > res) res = l[i];
            }
        }
    }
    cout << res;
}