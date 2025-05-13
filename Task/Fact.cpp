#include <iostream>
using namespace std;

void fact(int num)
{
  int factorial = 1;
  for (int i = 2; i <= num; i++)
  {
    factorial *= i;
  }
  cout << "Factorial of " << num << " is : " << factorial;
}
int main()
{
  int num;
  cout << "Enter a Number: ";
  cin >> num;
  fact(num);
  return 0;
}