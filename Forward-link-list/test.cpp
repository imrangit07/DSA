#include<iostream>
#include<forward_list>

using namespace std;
 
int main(){
    
    forward_list<int> obj1;
    forward_list<int> obj2={20,30,10,50,10};

    obj1.push_front(90);
    obj1.push_front(60);
    obj1.push_front(30);
    obj1.push_front(10);

    for(auto f:obj1)
    {
        cout<<f<<" ";
    }

    obj1.sort();

    cout<<"\n-------After Sort----------"<<endl;

     for(auto f:obj1)
    {
        cout<<f<<" ";
    }

    cout<<"\n-------After Reverse---------"<<endl;

     for(auto f:obj1)
    {
        cout<<f<<" ";
    }

    obj1.merge(obj2);

    cout<<"\n-------After Merge---------"<<endl;

      for(auto f:obj1)
    {
        cout<<f<<" ";
    }

    obj1.unique(); // only remove adjacent node(use after sort)

    cout<<"\n-------After Unique---------"<<endl;

      for(auto f:obj1)
    {
        cout<<f<<" ";
    }

    obj1.sort();

     cout<<"\n-------After sort---------"<<endl;

      for(auto f:obj1)
    {
        cout<<f<<" ";
    }

     obj1.unique(); // only remove adjacent node(use after sort)

    cout<<"\n-------Again After Unique---------"<<endl;

      for(auto f:obj1)
    {
        cout<<f<<" ";
    }

    obj1.reverse();

     cout<<"\n-------After Reverse---------"<<endl;

      for(auto f:obj1)
    {
        cout<<f<<" ";
    }
    
    return 0;
}