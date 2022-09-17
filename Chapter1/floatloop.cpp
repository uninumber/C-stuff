#include <iostream>
#include <iomanip>

int main()
{
  const double pi {3.14159265358979323846};

  const size_t perline {2};

  size_t linecount {};

  for (double radius {0.2}; radius < 3.0 + 0.0001; radius += 0.2)
    {
      std::cout << std::fixed << std::setprecision(2)
		<< "|radius=" << std::setw(5) << radius
		<< "~area=" << std::setw(5) << pi*radius*radius;

      if (perline == ++linecount)
	{
	  std::cout << std::endl;
	  linecount=0;
	}
    }
  std::cout << std::endl;
}
