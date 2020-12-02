#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, pos;

    cin>>a>>pos;

    int ans = a & (1<<pos);

    if (ans==0)
    {
        cout<<0<<endl;
    }else
    {
        cout<<1<<endl;
    }
    
    
}