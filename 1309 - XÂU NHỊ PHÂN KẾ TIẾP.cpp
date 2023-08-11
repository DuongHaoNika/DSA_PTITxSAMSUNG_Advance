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
        string s; cin >> s;
        int len = s.length();
        int check = 0;
        int index = -1;
        for(int i = len - 1; i >= 0; i--)
        {
            if(s[i] == '0')
            {
                s[i] = '1';
                check = 1;
                index = i;
                break;
            }
        }
        if(index)
        {
            for(int i = index + 1; i < len; i++) s[i] = '0';
        }
        if(check == 0)
        {
            for(int i = 0; i < len; i++) cout << '0';
        }
        else cout << s;
        cout << "\n";
    }
}

