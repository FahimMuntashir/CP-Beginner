#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, pos;
    cin>>n>>pos;

    int mask = n ^ (1<<pos);

    cout<<mask<<endl;
}