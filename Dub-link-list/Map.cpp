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
int main()
{
    // map<int, string> m;
    unordered_map<int, string> m;
    m[101] = "imran";
    m.insert({102, "arman"});
    m.insert(make_pair(103, "mainsh"));
    m[99];

    for (auto p : m)
    {
        cout << p.first << ", " << p.second << endl;
    }

    auto j = m.find(99);
    if (j != m.end())
    {
        m.erase(j);
    }
    else
    {
        cout << "Not Found" << endl; // if 99 key not found
    }
    cout << "\nMax Size= " << m.max_size() << endl;

    cout << "After delete" << endl;

    for (auto p : m)
    {
        cout << p.first << ", " << p.second << endl;
    }

    return 0;
}