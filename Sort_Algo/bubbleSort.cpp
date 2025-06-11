#include <iostream>
using namespace std;
void bubble(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int isSort = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {2, 3, 1, 6, 6, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}