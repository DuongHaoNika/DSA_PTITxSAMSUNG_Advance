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

struct A
{
    int start, end;
};

bool cmp(A x, A y)
{
    return x.end < y.end;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        A a[n + 5];
        FOR(i, 0, n - 1) cin >> a[i].start >> a[i].end;
        sort(a, a + n, cmp);
        int res = 0;
        int idx = -1;
        FOR(i, 0, n - 1)
        {
            if(a[i].start >= idx)
            {
                res++;
                idx = a[i].end;
            }
        }
        cout << res << endl;
    }
}