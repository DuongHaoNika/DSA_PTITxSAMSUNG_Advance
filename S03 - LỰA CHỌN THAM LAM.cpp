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

void find_max (int n, int s){
	if (s == 0){
		if (n == 1) cout << "0 ";
		else cout << "-1 ";
		return;
	}
	if (s > 9 * n){
		cout << "-1 "; return;
	}
	int a[n];
	f0 (i,n){
		if (s > 9){
			a[i] = 9;
			s -= 9;
		}else{
			a[i] = s;
			s = 0;
		}
	}
	f0 (i,n) cout << a[i];
}

void find_min(int n, int s){
	if (s == 0){
		if (n == 1) cout << "0 ";
		else cout << "-1 ";
		return;
	}
	if (s > 9 * n){
		cout << "-1 "; return;
	}
	int a[n];
	s -= 1;
	for (int i = n - 1; i >= 1; --i){
		if (s > 9){
			a[i] = 9;
			s -= 9;
		}else{
			a[i] = s;
			s = 0;
		}
	}
	a[0] = s + 1;
	f0 (i,n) cout << a[i];
}

int main(){
    FastIO;
    int n, s; cin >> n >> s;
    find_min(n, s); cout << ' '; find_max(n, s);
    return 0;
}