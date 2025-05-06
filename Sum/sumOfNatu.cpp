#include<iostream>
using namespace std;
 
int main(){
    int n,sum=0;
    // int i=1;

    cout<<"Enter a Number: ";
    cin>>n;
    // while (i<n)
    // {
    //    sum+=i;
    //    i++;
    // }

    sum=(n*(n-1))/2;
    cout<<"Sum of N is : "<<sum;
    return 0;
}