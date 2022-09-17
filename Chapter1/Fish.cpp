#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  const double fish_factor {2.0/0.5};
  const double inches_per_foot {12};
  const double pi {3.141592653589793238};

  double fish_length {};
  double fish_count {};

  cout << "Enter the number of fish you want to keep: ";
  cin >> fish_count;
  cout << "Etner the average length of fish: ";
  cin >> fish_length;
  fish_length /= inches_per_foot;

  const double pond_area {fish_length * fish_count * fish_factor};

  const double pond_diameter {2.0 * sqrt(pond_area/pi)};

  cout << "\nPond diameter required for " << fish_count << " fish is: "
       << pond_diameter << " feet.\n";
}
