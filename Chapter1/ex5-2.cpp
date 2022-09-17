#include <iostream>
#include <vector>
#include <numeric>

int main()
{
  std::vector<double> x;
  double input {};
  double sum {};

  std::cout << "Enter a number to get sum overall.";
  std::cout << "Enter 0 to end.";

  while (true)
    {
      std::cout << ": ";
      std::cin >> input;

      if (input==0)
	break;

      x.push_back(input);
    }
  sum=accumulate(x.begin(), x.end(), 0);
  std::cout << "The sum is: " << sum << std::endl;
  std::cout << "The average is: " << sum/x.size() << std::endl;
}
