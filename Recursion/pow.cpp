#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    return base * power(base, exponent - 1);
}

int main()
{
    int base, exponent;

    cout << "Enter Base Value : ";
    cin >> base;

    cout << "Enter exponent VAlue : ";
    cin >> exponent;

    if (exponent < 0)
    {
        cout << "Negative exponents are not supported";
    }
    else
    {
        cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    }

    return 0;
}