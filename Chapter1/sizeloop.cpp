#include <iostream>
#include <array>

int main()
{
  int values[] {1, 2, 3, 4, 5};

  std::cout << "There are " << sizeof(values) / sizeof(values[0])
	    << " elements in the array." << std::endl;

  int sum {};

  for (size_t i {}; i<std::size(values); ++i)
    {
      sum+= values[i];
    }

  std::cout << "The sum of elements in the array is: " << sum << std::endl;
}
