#include<iostream>
using namespace std;
 void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int minValue=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>=minValue){
            arr[j+1]=arr[j];
             j--;
        }
        arr[j+1]=minValue; 
    }
 }
int main(){
    int arr[] = {5, 4, 6, 2, 1,7,4,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}