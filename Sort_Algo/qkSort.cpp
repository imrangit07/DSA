#include<iostream>
using namespace std;
 
int part(int arr[],int low,int high){
int pv = arr[low];
int i=low+1;
int j=high;
int temp;

do{
    while(arr[i]<pv){
        i++;
    }
    while(arr[j]>pv){
        j--;
    }
    if(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

}while(i<j);
temp=arr[low];
arr[low]=arr[j];
arr[j]=temp;

return j;
}
void qkSort(int arr[],int low,int high){
    int pv;
    if(low<high){
     pv = part(arr,low,high);
     qkSort(arr,low,pv-1);
     qkSort(arr,pv+1,high);
    }
}

int main(){
    int arr[]={4,3,2,1,16,8,7,29,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    qkSort(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}