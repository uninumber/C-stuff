#include <iostream>

int main()
{

  int choice {};
  std::cout << "Your electoric book recipe is at your service.\n"
	    << "You can choose one of these delicious dishes.\n"
	    << "1. Boiled eggs.\n"
	    << "2. Scrambled eggs.\n"
	    << "3. Coddled eggs.\n"
	    << "4. Fried eggs.\n\n"
	    << "Enter your selection number: ";
    std::cin >> choice;
  

    switch(choice)
      {
      case 1:

	std::cout << "Let's boil some eggs!";
	break;

      case 2:

	std::cout << "Let's scramble some eggs!";
	break;

      case 3:

	std::cout << "Let's coddle some eggs!";
	break;

      case 4:

	std::cout << "Let's fry some eggs!";
	break;

      default:

	std::cout << "Invalid operation. Please try raw eggs.";
      }
}
