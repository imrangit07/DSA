#include <iostream>
using namespace std;

void LeapYear(int y)
{
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        cout << "is a Leap Year";
    }
    else
    {
        cout << "is not a Leap Year";
    }
}

int main()
{
    int year;
    cout << "Enter Any Year : ";
    cin >> year;
    LeapYear(year);
    return 0;
}