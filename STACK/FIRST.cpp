// // STACK

// // 1.LIFO - LAST IN FIRST OUT
// // 2.lINEAR DATA STRUCTURE
// // 3.PUSH
// // 4.POP
// // 5.TOP
// // 6.EMPTY

// // index start 0 :- stack pointer start with -1
// // top -1 :- after memory allocation and memory is not allocated to stack pointer.

// #include <iostream>
// using namespace std;
// class First
// {
// public:
//     int *arr;
//     int size, top;

//     First(int n)
//     {
//         size = n;
//         arr = new int[size];
//         top = -1;
//     }
//     void push(int v)
//     {
//         if (top == size - 1)
//         {
//             cout << "\n stack is overflow";
//         }
//         top++;
//         arr[top] = v;
//     }

//     int pop()
//     {
//         if (top == -1)
//         {
//             cout << "\n underflow";
//         }
//         top--;

//         return arr[top];
//     }
// };
// int main()
// {
//     int s;

//     cout << "Enter size of array : ";
//     cin >> s;

//     First f(s);

//     f.push(10);
//     f.push(20);
//     f.push(30);
//     f.push(40);
//     f.push(50);
//     cout << "Top : " << f.pop();

//     return 0;
// }

#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size, top;

    Stack(int n)
    {
        size = n;
        arr = new int[size];
        top = -1;
    }
    ~Stack()
    {
        delete[] arr;
    }

    void push(int v)
    {
        if (top == size - 1)
        {
            cout << "\n Stack is Overflow!";
            return;
        }
        top++;
        arr[top] = v;
        cout << "\n Pushed " << v << " To Stack";
    }

    int pop()
    {
        if (top == -1)
        {
            cout<<"\n Stack is empty";
            return -1;
        }
        top--;
        return arr[top];
    }

    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    int stackSize;

    cout << "Enter size of stack: ";
    cin >> stackSize;

    Stack obj(stackSize);
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);

    
    // cout<<"\n Top : "<<obj.pop();

    while (!obj.isEmpty())
    {
        cout<<"\n"<<obj.pop() <<" ";
    }

    // obj.pop();
    return 0;
}