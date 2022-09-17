#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  const unsigned  inches_per_foot {12};
  const unsigned feet_per_yard {3};

  double length;
  unsigned int yard {};
  unsigned int feet {};
  unsigned int inches {};

  cout << "Enter distance of yards as a decimal: ";
  cin >> length;

  yard = static_cast<unsigned int>(length);
  feet = static_cast<unsigned int>((length-yard)*feet_per_yard);
  inches = static_cast<unsigned int>
    (length * feet_per_yard * inches_per_foot) % inches_per_foot;

  cout << length << "yards converts to: "
       << yard << " yards; "
       << feet << " feet; "
       << inches << " inches.\n";
}
