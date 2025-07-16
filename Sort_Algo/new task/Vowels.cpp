#include <iostream>
using namespace std;

int main()
{
    string str = "imran";
    int count=0;
    for(char ch : str)
    {
     char c=tolower(ch);
     if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
     {
         count++;
     }
    }
    cout<<"Count of vowels in given string is : " << count << endl;
    return 0;
}