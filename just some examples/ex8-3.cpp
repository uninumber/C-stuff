#include <iostream>
#include <array>

double yield(const double values[][4], size_t n);

int main()
{
  double carrots[2][4] {{1.0, 2.0, 3.0, 4.0},
      {5.0, 6.0, 7.0, 8.0}};
  std::cout << "Yields=" << yield(carrots, std::size(*carrots))
	    << std::endl;
}

double yield(const double array[][4], size_t size)
{
  double sum {};

  for (size_t i {}; i<size; ++i)
    {
      for (size_t j {}; j<size; ++j)
	{
	  sum+=array[i][j];
	}
    }
  return sum;
}
		
       
