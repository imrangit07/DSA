#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    vector<int> v; //without parameter 
         //* v empty vector 
         
    // vector<int> v(9); //single parameter
         //* v(9) is printing vector elements 0 nine times

    // vector<int> v(9,6); //dubble parameters
         //* v(9,6) is printing vector elements 6 nine times

    // v.size is -1 if empty vector
          

    for(int i=0;i<v.size();++i){
        cout<<v[i]<<"\t";
    }

    cout<<"Size is : "<<v.size()<<endl;
  
    return 0;
}