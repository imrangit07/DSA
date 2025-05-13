#include <iostream>
using namespace std;

void fun(int &x, int &y)
{
    x += 10;
    y += 20;
    cout << x + y<<endl;
}

int main()
{
    int a, b;
    cout << "Enter Two Number";
    cin >> a >> b;

    fun(a, b);

    cout << "A is: " << a << "\nB is :" << b;
    return 0;
}