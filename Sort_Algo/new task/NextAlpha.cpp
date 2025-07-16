// #include<iostream>
// using namespace std;

// int main(){
//     string str = "imtiyaz";

//     for(int i=0;i<str.length();i++)
//     {
//         if(str[i]=='z'){
//         str[i]= 'a';
//         }
//         else if(str[i]=='Z')
//         {
//             str[i]= 'A';
//         }else{
//             str[i]++;
//         }

//     }
//     cout<<"string is : " << str << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    string str = "imran";

    for (char &c : str)
    {
        if (c == 'z')
        {
            c = 'a';
        }
        else if (c == 'Z')
        {
            c = 'A';
        }
        else
        {
            c++;
        }
    }
    cout << "string is : " << str << endl;
    return 0;
}