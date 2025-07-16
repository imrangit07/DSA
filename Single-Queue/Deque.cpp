#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dque;

    dque.push_front(10);
    dque.push_front(20);
    dque.push_back(30);
    dque.push_front(40);
    dque.push_back(50);
    dque.push_front(60);

    for(auto d:dque)
    {
        cout<<d<<" ";
    }

    
    deque<int>::iterator it=dque.begin();
    dque.insert(it++,90);

    for(auto t:dque)
    {
        cout<<t<<" ";
    }


    return 0;
}