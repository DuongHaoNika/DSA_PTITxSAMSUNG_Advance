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

int gcd(int a, int b)
{
    while(a * b != 0)
    {
        if(a >= b) a %= b;
        else b %= a;
    }
    return a + b;
}

int lcd(int a, int b)
{
    int tich = a*b;
    return tich/gcd(a, b);
}
int main()
{
    Sync
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 5];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << a[0] << " ";
        for(int i = 1; i < n; i++) cout << lcd(a[i - 1], a[i]) << " ";
        cout << a[n - 1] << "\n";
    }
}
