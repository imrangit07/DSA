// #include<iostream>
// #include<algorithm>

// using namespace std;
// string Reverse(string str)
// {
//     reverse(begin(str),end(str));
//     return str;
// }
// int main()
// {
//     string str = "imran"; 
//     cout<<"Reverse string is : "<<Reverse(str);
//     return 0;
// }


#include<iostream>
#include<algorithm>

using namespace std;
string Reverse(string str)
{
    int left =0;
    int right = str.length()-1;
    while (left<right)
    {
        swap(str[left],str[right]);
        left++;
        right--;
    }
    
    return str;
}
int main()
{
    string str = "imran"; 
    cout<<"Reverse string is : "<<Reverse(str);
    return 0;
}