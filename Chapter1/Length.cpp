#include <iostream>

using namespace std;

int main()
{

  unsigned int yards {}, feet {}, inches {};

  //Convert a distance from yards, feet, and inches to inches.

  cout << "Enter a distance in yards, feet, and inches"
       << " with the three values separated by spaces: "
       << "\n";

  cin >> yards >> feet >> inches;

  const unsigned inches_per_foot {12};
  const unsigned feet_per_yard {3};

  unsigned total_inches {};

  total_inches = inches + inches_per_foot * (yards*feet_per_yard+feet);

  cout << "The distances correspondes to " << total_inches << "inches.\n";

  //Convert total_inches to yards, feet, and inches.

  cout << "Enter a distance in inches: \n";

  cin >> total_inches;

  feet = total_inches / inches_per_foot;

  inches = total_inches % inches_per_foot;

  yards = feet / feet_per_yard;

  feet = feet % feet_per_yard;

  cout << "The distance corresponds to: "
       << yards << " yards; "
       << feet << " feet; "
       << inches << " inches. " << "\n";
}
