#include<iostream>
using namespace std;
 void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        if(index!=i){
            int temp=arr[index];
            arr[index]=arr[i];
            arr[i]=temp;
        }
    }
 }
int main(){
    int arr[] = {2, 13, 1, 6, 6, 4, 3, 12, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}