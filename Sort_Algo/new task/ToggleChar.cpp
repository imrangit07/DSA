#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    string str = "Imran Hussain";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    cout << str << endl;
    return 0;
}