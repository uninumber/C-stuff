#include <iostream>
#include <iomanip>

int main()
{
  unsigned int limit {};

  std::cout << "This program calculates n! and the sum of the ingeters"
	    << " up to n for values 1 to limit.\n";
  std::cout << "What upper limit for n would you like? ";
  std::cin >> limit;

  std::cout << std::setw(8) << "integer" << std::setw(8) << "sum"
	    << std::setw(20) << "factorial" << std::endl;

  for (unsigned long long n {1}, sum {}, factorial {1}; n<=limit; ++n)
    {

      sum+=n;
      factorial*=n;
      std::cout << std::setw(8) << n << std::setw(8) << sum
		<< std::setw(20) << factorial << std::endl;
    }
}
