#include <iostream>
using namespace std;

void copyArr(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
        arr[i] = arr[i] + 10;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    copyArr(arr);
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}