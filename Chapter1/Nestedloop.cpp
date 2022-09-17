#include <iostream>
#include <iomanip>
#include <cctype>

int main()
{

  size_t table {};

  size_t table_min {2};
  size_t table_max {12};

  char reply {};

  do
    {
      std::cout << "What size of table do you want ("
		<< table_min << " to " << table_max << ")?";
      std::cin >> table;
      std::cout << std::endl;

      if (table < table_min || table > table_max)
	{
	  std::cout << "Invalid command. Plese try appended row.";
	  return 1;
	}

      std::cout << std::setw(6) << " |";

      for (size_t i {1}; i<=table; ++i)
	{
	  std::cout << std::setw(3) << " " << " |";
	}
      std::cout << std::endl;

      for (size_t i {}; i<=table; ++i)
	{
	  std::cout << "------";
	}
      std::endl;

      for (size_t i {1}; i<=table; ++i)
	{
	  std::cout << setw(3) << " " << i << " |";

	  for (size_t j {1}; j<=table; ++j)
	    {
	      std::cout << setw(3) << " " << j*i << " |";
	    }
	  std::cout << std::endl;
	}
	

	  std::cout << "\nDo you want to create another table? (y or n): ";
	  std::cin >> reply;

	} while(std::tolower(reply)=='y');
    
}
    
	    
