
// bit on

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, pos;
    cin >> a >> pos;

    int ans = (a | (1 << pos));

    cout << ans << endl;
}