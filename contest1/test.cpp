#include<bits/stdc++.h>


using namespace std; 

int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        count += (n&1);
        n= n>>1;
    }

    return count;
    
}

int main()
{
    int n; 
    cin>>n;

    int res = countSetBits(n);
    cout<<res<<endl;
}