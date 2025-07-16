// map = set

// ordered = ordered set

// unordered unique = unordered set (unique keys)

// value = key

// sorted = sorted

// self-balanced binary search tree = underlying data structure for ordered set
// hash function = underlying data structure for unordered set

#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main()
{
    multiset<int> s;
    // multiset<int> s; // Not unique — allows duplicates
    s.insert(11);
    s.insert(62);
    s.insert(33);
    s.insert(77);
    s.insert(55);
    s.insert(99);
    s.insert(99);
    s.insert(99);
    s.insert(77);

    s.erase(99); // This erases all instances of 99 in the multiset.

    // If you want to erase only the first occurrence, use the find() function.

    // A set includes only unique values, ordered automatically.
    // A multiset allows duplicate values and keeps them sorted.

    auto j = s.find(99); // Always check with find() to avoid segmentation faults.

    if (j != s.end())
    {
        cout << "Found" << endl; // If the key is found
    }
    else
    {
        cout << "Not Found" << endl; // If the key is not found
    }

    for (auto p : s)
    {
        cout << p << " ";
    }

    return 0;
}
