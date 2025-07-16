#include<iostream>
using namespace std;

class Stack
{
    public:
    int *arr;
    int top,size;

    Stack(int n)
    {
      size=n;
      arr=new int[size];
      top=-1;
    }

    ~Stack()
    {
      delete[] arr;
    }

    void push(int val)
    {
        if(top==size-1)
        {
            cout<<"\nStack Overflow";
            return;
        }
        top++;
        arr[top]=val;
        cout<<"\nPushed "<<val <<" to Stack";
    }

    int pop()
    {
        if(top == -1)
        {
            cout<<"\nStack is Empty!";
            return -1;
        }
        return arr[top];
    }

};
int main()
{
    Stack obj(5);

    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);


    cout<<"\nTop Value is : "<<obj.pop();

    return 0;
}