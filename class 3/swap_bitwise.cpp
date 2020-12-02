#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 5;
    int b= 10;

    cout<<"after swapping: "<<endl;
    a = a^b;
    b= a^b;
    a= a^b;
    cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
}