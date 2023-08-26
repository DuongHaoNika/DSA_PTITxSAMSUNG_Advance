#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define f0(i,n) for (int i=0; i<n; i++)
#define f1(i,n) for (int i=1; i<=n; i++)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define TC() int t; cin >> t; while (t--)
#define el cout << "\n"
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn 

const int MOD = (int) 1e9+7;

int n, m, a[101], x[101], ans = INT_MIN;

void Try (int i){
	for (int j = x[i - 1] + 1; j <= n - 3 + i; ++j){
		x[i] = j;
		if (i == 3){
			int sum = 0;
			for (int k = 1; k <= 3; ++k) sum += a[x[k]];
			if (sum <= m) ans = max(ans, sum);
		}
		else Try(i + 1);
	}
}

int main(){
    FastIO;
    TC(){
    	cin >> n >> m;
    	ans = INT_MIN;
    	f1 (i,n) cin >> a[i];
    	Try(1);
    	cout << ans; el;
    }
    return 0;
}