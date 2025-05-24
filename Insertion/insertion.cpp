#include <iostream>
using namespace std;

void Insertion(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int k = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};

    int size = sizeof(arr) / sizeof(arr[0]);

    Insertion(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}