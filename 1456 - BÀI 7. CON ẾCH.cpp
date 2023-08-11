#include <bits/stdc++.h>
#define Sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    Sync
    int t; cin >> t;
    ll fi[55];
    fi[0] = 0;
    fi[1] = 1;
    fi[2] = 2;
    fi[3] = 4;
    fi[4] = 7;
    fi[5] = 13;
    fi[6] = 24;
    for(int i = 7; i <= 50; i++) fi[i] = fi[i - 2] + fi[i - 1] + fi[i - 3];
    while(t--)
    {
        int n; cin >> n;
        cout << fi[n] << "\n";
    }
} 