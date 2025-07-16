#include <iostream>
using namespace std;

void selection(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int index = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }

            if (index != i)
            {
                int swa = arr[index];
                arr[index] = arr[i];
                arr[i] = swa;
            }
        }
    }
}
int main()
{
    int arr[] = {4, 2, 3, 5, 1};
    int s = sizeof(arr) / sizeof(arr[0]);

    selection(arr, s);

    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
    
   
    return 0;
}