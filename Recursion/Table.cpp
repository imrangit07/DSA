#include <iostream>
using namespace std;

void printTable(int num, int i)
{
    if (i > 10)
    {
        return;
    }

    cout << num << " X " << i << " = " << num * i << endl;
    printTable(num, i + 1);
}

int main()
{
    int num, i = 1;

    cout << "Enter any Number : ";
    cin >> num;

    printTable(num, i);
    return 0;
}