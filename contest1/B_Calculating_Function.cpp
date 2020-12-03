#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    if (n & 1)
    {
        ans = -((n / 2) + 1);
    }
    else
    {
        ans = n / 2;
    }

    cout << ans << endl;
}