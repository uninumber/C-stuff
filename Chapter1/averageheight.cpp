#include <iostream>
#include <iomanip>

int main()
{
  size_t count {};

  std::cout << "How many heights will you enter? ";
  std::cin >> count;

  int height[count];

  size_t entered {};

  while (entered<count)
    {
      std::cout <<"Enter a height: ";
      std::cin >> height[entered];

      if (height[entered]>0)
	{
	  ++entered;
	}
      else
	{
	  std::cout << "You need to try positive one.\n";
	  continue;
	}
    }
  unsigned int total {};

  for (size_t i {}; i<count; ++i)
    {
      total+=height[i];
    }
  std::cout << std::fixed << std::setprecision(1);
  std::cout << "The average height is: " << static_cast<float>(total)/count
	    << std::endl;
}
