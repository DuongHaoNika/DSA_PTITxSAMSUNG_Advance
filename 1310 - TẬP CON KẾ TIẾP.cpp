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
    cin.ignore();
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[k + 5];
        int check = 0;
        int index = -1;
        for(int i = 1; i <= k; i++) cin >> a[i];
        for(int i = k; i >= 1; i--)
        {
            if(a[i] < n - k + i)
            {
                check = 1;
                a[i]++;
                index = i;
                break;
            }
        }
        if(check)
        {
            for(int i = 1; i <= index; i++) cout << a[i] << " ";
            for(int i = index + 1; i <= k; i++)
            {
                a[i] = a[i - 1] + 1;
                cout << a[i] << " ";
            }
        }
        else
        {
            for(int i = 1; i <= k; i++)
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
}