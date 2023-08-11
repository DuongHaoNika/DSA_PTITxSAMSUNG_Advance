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

int main()
{
    Sync
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            int tmp; cin >> tmp;
            v.push_back(tmp);
        }
        next_permutation(v.begin(), v.end());
        for(int i = 0; i < n; i++) cout << v[i] << " ";
        cout << "\n";
    }
}
