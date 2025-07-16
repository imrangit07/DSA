#include<iostream>
using namespace std;
 
int main(){
    string str ="123457891";
    string result="";
    for(int i=0;i<str.length();i++)
    {
     result+=str[i];
     if((str[i]%2==1) && (str[i+1]%2==1) && (i+1<str.length()))
     {
        result+="-" ;
     }
    }
    cout<<result<<endl;
    return 0;
}