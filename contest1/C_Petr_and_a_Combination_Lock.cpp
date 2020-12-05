#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int sum = 0;

    int n[t];
    while (t--)
    {
        for (int i = 0; i < t; i++)
        {
            cin >> n[i];
        }
        for (int i = 0; i < t; i++)
        {
            sum += n[i];
        }
    }
    if (sum % 360 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}