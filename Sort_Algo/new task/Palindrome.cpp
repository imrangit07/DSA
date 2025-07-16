#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str = "madam";
    string rev = str;
    reverse(str.begin(), str.end());
    if (rev == str)
    {
        cout << '"' << str << '"' << " is a palindrome." << endl;
    }
    else
    {
        cout << '"' << str << '"' << " is not a palindrome." << endl;
    }
    return 0;
}