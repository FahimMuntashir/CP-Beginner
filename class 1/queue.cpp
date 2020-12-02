#include<bits/stdc++.h>

using namespace std; 
void show(queue<int> queTemp)
{
    while (!queTemp.empty())
    {
        cout<<queTemp.front()<<" ";
        queTemp.pop();
    }
    cout<<endl;
    
}

int main()
{
    queue<string> q;

    q.push("Fahim");
    q.push("Munna");
    q.push("Muntashir");

    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;

    queue<int> natural;
    for (int i = 0; i < 100; i++)
    {
        natural.push(i);
    }
        show(natural);

    
}