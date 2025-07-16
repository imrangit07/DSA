// string = "sky is blue";
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "sky is blue";
    stack<string> str2;

    for (int i = 0; i < str.length(); i++)
    {
        string word = "";

        while (str[i] != ' ' && i < str.length())
        {
            word += str[i];
            i++;
        }

        str2.push(word);
    }


    while (!str2.empty())
    {
        cout << str2.top() << " ";
        str2.pop();
    }

    return 0;
}