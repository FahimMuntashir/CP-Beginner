#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp = n;
    int count = 0;
    while (n)
    {
        if (n&1)
        {
            count++;
        }

        n= n>>1;
        
    }

    cout<<"number of set bits of" << temp<<" are/is: "<<count<<endl;
    
}