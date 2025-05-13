#include <iostream>
using namespace std;

void bubble(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        bool isSort = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                isSort = true;
            }
            count++;
        }

        if (isSort == false)
        {
            break;
        }
    }

    cout << "\n--After Swapping The Element--\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl
         << "Count is : " << count;
}

int main()
{
    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[size];

    if (size < 1)
    {
        cout << "\nInvalid Array";
        return 0;
    }
    else if (size == 1)
    {
        cout << "\nAt least, the size of the array must be 2";
        return 0;
    }
    else if (size > 10)
    {
        cout << "\nArray Overflow";
        return 0;
    }
    cout << "Enter " << size << " Element for The Array. \n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "--Befor Swapping The element--\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    bubble(arr, size);
    return 0;
}