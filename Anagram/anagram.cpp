#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[10] = "listen";
    char str2[10] = "silentw";

    int s[26] = {0};

    if (strlen(str1) != strlen(str2)) {
        cout << "Not Anagram (different lengths)";
        return 0; 
    }
  
    for (int i = 0; str1[i] != '\0'; ++i)
    {
        s[str1[i] - 'a']++;
    }
    for (int i = 0; str2[i] != '\0'; ++i)
    {
        s[str2[i] - 'a']--;
    }
    bool flag = true;
    for (int i = 0; i < 26; ++i)
    {
        if (s[i] != 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Anagram";
    }
    else
    {
        cout << "Not Anagram";
    }

    for(int i=0;i<26;++i){
        cout<<s[i]<<"\t";
    }
    return 0;
}