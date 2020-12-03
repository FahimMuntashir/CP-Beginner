#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[105];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    int pos = arr[k - 1];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > 0 && arr[i] >= pos)
        {
            count++;
        }
    }

    cout << count << endl;
}