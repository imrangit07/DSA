#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> que;

    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    que.push(60);

    cout << "Last element = " << que.back() << endl;
    cout << "sizeOf = " << que.size() << endl;

    while (!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }

    cout << "\nLast element after pop = " << que.back() << endl;


    while (!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
    return 0;
}