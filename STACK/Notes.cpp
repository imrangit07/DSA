/*
STACK DATA STRUCTURE NOTES:

1. LIFO - Last In First Out: The last element pushed is the first one to be popped.
2. Linear Data Structure: Elements are arranged in a sequential manner.
3. Main Operations:
   - PUSH: Add an element to the top of the stack
   - POP: Remove and return the top element from the stack
   - TOP/Peek: View the top element without removing it
   - isEmpty: Check if the stack is empty

Implementation Notes:
- Index starts at 0
- Stack pointer (top) starts at -1 to indicate empty stack
- When top == -1, the stack is empty (underflow condition)
- When top == size-1, the stack is full (overflow condition)
*/

#include <iostream>
using namespace std;

class Stack 
{
private:
    int *arr;       // Pointer to array that will hold stack elements
    int size;       // Maximum size of the stack
    int top;        // Index of top element (stack pointer)

public:
    // Constructor to initialize stack with given size
    Stack(int n)
    {
        size = n;
        arr = new int[size];  // Allocate memory for stack
        top = -1;             // Initialize top to -1 (empty stack)
    }

    // Destructor to free allocated memory
    ~Stack()
    {
        delete[] arr;
    }

    // Push operation: Add element to top of stack
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "\nStack Overflow - Cannot push, stack is full";
            return;
        }
        top++;             // Move top pointer up
        arr[top] = value;  // Store value at new top position
        cout << "\nPushed " << value << " to stack";
    }

    // Pop operation: Remove and return top element from stack
    int pop()
    {
        if (top == -1)
        {
            cout << "\nStack Underflow - Cannot pop, stack is empty";
            return -1;  // Return -1 to indicate error (assuming -1 isn't a valid stack value)
        }
        int poppedValue = arr[top];  // Store value to be returned
        top--;                       // Move top pointer down
        return poppedValue;          // Return the stored value
    }

    // Peek operation: Return top element without removing it
    int peek()
    {
        if (top == -1)
        {
            cout << "\nStack is empty";
            return -1;
        }
        return arr[top];
    }

    // Check if stack is empty
    bool isEmpty()
    {
        return (top == -1);
    }

    // Check if stack is full
    bool isFull()
    {
        return (top == size - 1);
    }
};

int main()
{
    int stackSize;

    cout << "Enter size of stack: ";
    cin >> stackSize;

    Stack myStack(stackSize);  // Create stack with user-specified size

    // Demonstrate stack operations
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);

    // Try to push to full stack (should show overflow)
    myStack.push(60);

    cout << "\nTop element: " << myStack.peek();
    cout << "\nPopped element: " << myStack.pop();
    cout << "\nNew top element: " << myStack.peek();

    // Demonstrate multiple pops
    cout << "\nPopping all elements: ";
    while (!myStack.isEmpty())
    {
        cout << myStack.pop() << " ";
    }

    // Try to pop from empty stack (should show underflow)
    cout << "\nAttempting to pop from empty stack: ";
    myStack.pop();

    return 0;
}