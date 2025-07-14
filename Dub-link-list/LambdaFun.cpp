#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{5, 4, 3, 6, 7, 8};
    cout << "\nLambda" << endl;
    cout << [](int a, int b)
    { return a > b; }(5, 40);

    //  lis.remove_if([](int a,int b){return a>b;}(5,40));
    // Lambda function (anonimas)  it's the single line functions
    // [] in front

    // whene we want to clall a lambda funtion it's need to be called with (auto) and inside of () all parameters are needed to be passed.
    cout << "\n Pointer Function" << endl;

    auto p = [](int a, int b)
    { return a > b; };
    // cout<<p(90,80);

    sort(v.begin(), v.end(), less<int>());
    // sort(v.begin(),v.end(),greater<int>());
    // sort(v.begin(),v.end(),[](int a,int b){return a>b;});

    for (auto p : v)
    {
        cout << p << " ";
    }
    return 0;
}