#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> vec;
    vector<string> duplicate;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        vec.push_back(str);
    }
    int count = 0;

    sort(vec.begin(), vec.end());

    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i - 1] == vec[i])
        {
            duplicate.push_back(vec[i]);
            count++;
        }
    }

    for (int i = 0; i < duplicate.size(); i++)
    {
        cout << duplicate[i] << endl;
    }

    if (count == 0)
    {
        cout << "no duplicate found" << endl;
    }
}