#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <iterator>
#include <string>
#define ll long long
#define Sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';
using namespace std;

int IsPrime(ll n)
{
    if(n < 2) return 0;
    ll sqr = sqrt(n);
    for(int i = 2; i <= sqr; i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

ll giaithua(ll n)
{
    if(n <= 1) return 1;
    else return n * giaithua(n - 1 );
}

int cmp(int a, int b)
{
    return a > b;
}

int main()
{
    Sync
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector <int> v;
        int a[n + 5];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            int check = 1;
            for(int j = i + 1; j < n; j++)
            {
                if(a[i] <= a[j])
                {
                    check = 0;
                    break;
                }
            }
            if(check) v.push_back(a[i]);
        }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
        cout << "\n"; 
    }
}