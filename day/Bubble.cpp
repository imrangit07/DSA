#include <iostream>
using namespace std;

void Bubble(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        bool isNotSwap = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            count++;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isNotSwap = true;
            }
        }
        if (!isNotSwap)
        {
            break;
        }
    }
    cout << "Count is : " << count << "\n";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Bubble(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}