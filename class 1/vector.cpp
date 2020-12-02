#include <bits/stdc++.h>

using namespace std;

//descending order function

bool descending(int a, int b)
{
    return a > b;
}

int main()
{
    vector<int> vec;

    int n;
    cin >> n;
    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        vec.push_back(value);
    }
    // ascending sorting
    sort(vec.begin(), vec.begin() + vec.size());

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\t";
    }
    cout << endl;
    //descending order
    sort(vec.begin(), vec.end(), descending);
    cout << "descending order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << "\t";
    }

    //sort with a specific index
    cout << endl;
    sort(vec.begin(), vec.begin() + 3);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << "\t";
    }
    cout << endl;

    //vector element erase

    cout<<"erase element: "<<endl;

    vec.erase(vec.begin() + 2);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    cout << endl;

    vector<int> vec2;

    for (int i = 0; i < 6; i++)
    {
        int n;
        cin>>n;

        vec2.push_back(n);
    }

    vec2.erase(vec2.begin()+2);

    for (int i = 0; i < vec2.size(); i++)
    {
        cout<<vec2[i]<<" ";
    }
    cout<<endl;
}
