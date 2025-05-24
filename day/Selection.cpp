#include<iostream>
using namespace std;

void Selection(int arr[],int size){
    
    for(int i=0;i<size-1;i++){
        int index =i;
        for(int j=j+1;j<size;j++){
            if(arr[i]>arr[j]){
                index=j;
            }
        }
        if(index!=)
    }
}
 
int main(){
    
   int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Selection(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}