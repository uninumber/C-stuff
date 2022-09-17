#include <iostream>
#include <array>

int main()
{

const size_t max_length {80};

char geniuses[][max_length] {
  "Elon Musk", "Dennis Ritchie",
    "Donald Hoffman", "Bjarne Stroustrup",
    "Kianu Rivs", "Leonardo Di Caprio"
    };

size_t choice {};

 std::cout << "Pick your genius. Enter a number between 1 and "
	  << std::size(geniuses) << ": ";
 std::cin >> choice;

 if (choice>1 && choice << std::size(geniuses))
   {
     std::cout << "Your genius is: " << geniuses[choice-1] << std::endl;
   }
 else
   {
     std::cout << "Sorry, you have not genius." << std::endl;
   }
}
