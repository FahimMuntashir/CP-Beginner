#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int value[20], volume[20];
    int cap;
    cout << "enter bag capasity: " << endl;
    cin >> cap;

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
        cin >> volume[i];
    }
    int ans = 0;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int profit = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                profit += value[i];
                sum += volume[i];
            }
        }
        if (sum <= cap)
        {
            ans = max(ans, profit);
        }
    }
    cout << ans << endl;

    for (int mask = 0; mask < (1 << n); mask++)
    {
        int pro = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                pro += value[i];
                sum += volume[i];
            }
        }

        if (sum <= cap && ans == pro)
        {
            for (int i = 0; i < n; i++)
                if (mask & (1 << i))
                    cout << i << " ";
            cout << endl;
            break;
        }
    }
}