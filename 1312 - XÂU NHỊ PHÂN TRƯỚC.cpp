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
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        int k = s.size();
        int check = 0;
        int rent = 0;
        if(s[k - 1] == '1')
        {
            s[k - 1] = '0';
        }
        else
        {
            rent = 1;
            for(int i = k - 2; i >= 0; i--)
            {
                if(s[i] == '1')
                {
                    s[i] = '0';
                    rent = 0;
                    for(int u = i + 1; u < k; u++) s[u] = '1';
                    break;
                }
            }
        }
        if(rent == 0)
        {
            for(int i = 0; i < k; i++) cout << s[i];
        }
        else
        {
            for(int i = 0; i < k; i++) cout << "1";
        }
        cout << "\n";
    }
}
