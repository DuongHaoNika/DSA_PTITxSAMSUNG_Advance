#include <iostream>
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
#define Sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int n, k;
int a[20];
vector <int> v;
int check = 0;

void init()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
}

int check_sum()
{
    int len = v.size();
    int sum = 0;
    for(int i = 0; i < len; i++) sum += v[i];
    if(sum == k) return 1;
    else if(sum > k) return 0;
    return -1;
}

void in()
{
    int len = v.size();
    cout << "[";
    for(int i = 0; i < len - 1; i++)
    {
        cout << v[i] << " ";
    }
    cout << v[len - 1] << "]";
}

void Try(int i)
{
    for(int j = i; j < n; j++)
    {
        v.push_back(a[j]);
        if(check_sum() == 1)
        {
            check = 1;
            in();
        }
        else if(check_sum() == -1) Try(j);
        v.pop_back();
    }
}

int main()
{
    Sync
    int t; cin >> t;
    while(t--)
    {
        init();
        Try(0);
        if(check == 0) cout << -1;
        check = 0;
        v.clear();
        cout << "\n";
    }
    return 0;
}