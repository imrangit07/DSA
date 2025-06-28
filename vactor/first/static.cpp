#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{1, 2, 3}; // This is static vector

    v[3] = 90; // vector size is 3 and its will not change vector size

    v.push_back(30);

    // and push_back is a function to add element in the vector and it will increase size of vector by 1 and it will add element in the vector at its end position
    v.pop_back();


    v.resize(2); 
    // vector size is 2 and its will change vector size and remove all element after 2 index

    v.clear(); // vector size is 0 but vactor is existing and it will clear all element in the vector

    cout << "new size " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}