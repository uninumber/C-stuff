#include <iostream>

using namespace std;

int main()
{
  int sum=0, val=0;

  while (cin >> val)
    sum+=val;
  cout << "Sum of these numbers: " << sum << "\n";
  return 0;
}
