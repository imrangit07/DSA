#include <iostream>
using namespace std;

void bubSort(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        bool isShort = false;
        count++;

        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                isShort = true;
            }
        }
        if (!isShort)
        {
            break;
        }
    }
    cout << "Count is: " << count << "\n";
}

int main()
{
    int arr[] = {1,2,4,3,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}