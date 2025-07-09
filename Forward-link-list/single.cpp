#include<iostream>
#include<forward_list>
using namespace std;
 
int main(){
    
    forward_list<int> first = {1,2,3};
    forward_list<int> second = {10,20,30,40,50};
    first.push_front(4);
    first.push_front(40);
    first.push_front(400);
    first.push_front(499);

    for(auto f:first)
    {
        cout<<f<<" ";
    }

    first.pop_front();

    cout<<"\n---After Pop Front--- "<<endl;
    for(auto f:first)
    {
        cout<<f<<" ";
    }
    first.sort();
    cout<<"\n---After Sort --- "<<endl;
    for(auto f:first)
    {
        cout<<f<<" ";
    }
    first.reverse();

     cout<<"\n---After Reverse --- "<<endl;
    for(auto f:first)
    {
        cout<<f<<" ";
    }

    // first.unique();


    first.merge(second);
     cout<<"\n---After Merge --- "<<endl;
    for(auto f:first)
    {
        cout<<f<<" ";
    }

    return 0;
}