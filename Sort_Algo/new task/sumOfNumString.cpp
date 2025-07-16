#include<iostream>
using namespace std;
 
int main(){
    string str="hello 12345";

    for(char &c: str)
    {
        // cout<<c<<" ";
        if(c<='9' && c>='0')
        {
            cout<<c <<" ";
        }
    }
    return 0;
}