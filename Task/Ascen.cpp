#include <iostream>
using namespace std;

void Ascen(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}

void Print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {4, 5, 3, 1, 2, 6, 8, 7,10,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    Ascen(arr, n);
    Print(arr,n);
    return 0;
}