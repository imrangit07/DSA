#include <iostream>
using namespace std;

int fact(int num)
{
    if (num <= 1)
    {
        return 1;
    }

    return num * fact(num - 1);
}

int main()
{

    int num;
    cout << "Enter any Number : ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial is: " << fact(num) << endl;
    }
    return 0;
}