#include <iostream>
#include <map>
#include<unordered_map>
using namespace std;
// 1. map is colled associative container
// 2. It is having key and value pair
// 3. it stores the data in ascending order by default
// 4. It is also called self balance binary search tree
// 5. There are order map and unorder map
// 6. Key always be unique but value may be duplicate

// count the corses
int main()
{
    int n1;
    string s;
    map<string, int>mp;

    cout<<"Enter Map Size : ";
    cin>>n1;
   
    for(int i=0;i<n1;i++)
    {
        cout<<"Enter conrse name : "<<endl;
        cin>>s;
        mp[s]++;
    }

    for(auto p:mp)
    {
        cout<<p.first<<" = "<<p.second<<endl;
    }

    return 0;
}