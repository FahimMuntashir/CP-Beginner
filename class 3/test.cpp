#include <bits/stdc++.h>

using namespace std;

int main()
{
    //  int a,b;
    //  cin>>a>>b;

    //  cout<<"a+b"<<": "<<a+b<<endl;

    //  cout<<"using bit: "<<(a^b)+2*(a&b)<<endl;

    int n;
    int arr[100];
    cin >> n;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                cout << i << " ";
            }
            else
            {
                cout << i << " ";
                cin>>arr[n/i];
            }
        }
    }


    // int n;
    // cin>>n;

    // if (n&1)
    // {
    //     cout<<"odd"<<endl;
    // }else
    // {
    //     cout<<"even"<<endl;
    // }
}
