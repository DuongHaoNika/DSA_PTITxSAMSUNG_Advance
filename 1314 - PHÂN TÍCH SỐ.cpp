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
#define PI 3.141592653589793238
#define endl '\n'

vector<int> v;
int N;

void In()
{
    cout << "(" << v[0];
    for(int i = 1; i < v.size(); i++) cout << " " << v[i];
    cout << ") ";
}

int checksum()
{
    int sum = 0;
    for(int i = 0; i < v.size(); i++) sum += v[i];
    if(sum == N) 
    {
        In();
        return 1;
    }
    else if(sum < N) return 0;
    return -1;
}

void Try(int i)
{
    for(int j = i; j >= 1; j--)
    {
        v.push_back(j);
        if(checksum() == 0) Try(j);
        v.pop_back();
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> N;
        Try(N);
        cout << endl;
        v.clear();
    }
}