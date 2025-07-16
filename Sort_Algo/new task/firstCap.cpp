#include<iostream>
using namespace std;

void CapitalizeFirst(string str)
{
    bool newWord= true;
  for(char &c : str)
  {
    
    if(newWord && c != ' ')
    {
        c = toupper(c);
        newWord=false;
    }
    else if(c == ' ')
    {
        newWord = true;
    }
  }

  cout<<str;
}
 
int main(){
    string str = "hello, i am imarn hussain";
    CapitalizeFirst(str);
    return 0;
}