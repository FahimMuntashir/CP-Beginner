#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[25];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int mask  = 0; mask < (1<<n); mask++)
    {
        for (int  i = 0; i < n; i++)
        {
            if (mask&(1<<i))
            {
                cout<<arr[i]<<" ";
            }
            
        }
        cout<<endl;
        
    }
    
    
}