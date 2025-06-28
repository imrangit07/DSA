#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    vector<int> v;//without parameter 

    // vector<int> v(9); //single parameter

    // vector<int> v(9,6);//dubble parameters

    // v.size is -1 if empty vector
    
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<"\t";
    }

    cout<<"Size is : "<<v.size()<<endl;
  
    return 0;
}