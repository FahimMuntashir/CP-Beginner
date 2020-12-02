#include<bits/stdc++.h>

using namespace std;

int main()
{
    map <string, int> customer;

    map<string, int>::iterator it ;

    customer["Fahim "] = 5;
    customer["Arnoc"] = 10;
    customer.insert(make_pair("kulsim", 100));
    // cout<<customer["kulsim"]<<endl;

it = customer.begin();
while (it!=customer.end())
{
    cout<< it->second<<endl;
    it++;
}


   
    
} 