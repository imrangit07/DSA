#include <iostream>
using namespace std;

int main()
{
    string str = "hello, I am Imran hussain";
    string word = "";
    string largestWord = "";

    for (int i=0;i<=str.length();i++)
    {
        if (i<str.length() && str[i]!= ' ')
        {
            word += str[i];
        }
        else
        {
            if (word.size() > largestWord.size())
            {
                largestWord = word;
            }
            word = "";
        }
    }

    cout << "Largest Word is: " << largestWord << endl;
    return 0;
}