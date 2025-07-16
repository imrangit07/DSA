#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> str;
    str.push(110);
    str.push(20);
    str.push(50);
    str.push(100);
    str.push(90);

    cout << str.size() << endl;
    int min;

    for (int i = 0; i < 5; i++)
    {
        if (str.empty())
        {
            break;
        }

        else if (str.top() < min)
        {
            min = str.top();
        }

        str.pop();
    }

    cout << "Minimum element in stack is: " << min << endl;

    // while (!str.empty())
    // {
    //     cout << str.top() << " ";
    //     str.pop();
    // }

    return 0;
}

// minimam value in stack
