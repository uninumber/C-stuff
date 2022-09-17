#include <iostream>

int main()
{

  char letter {};

  std::cout << "Enter the letter: ";

  std::cin >> letter;

  if (std::isupper(letter))

    std::cout << "The letter is uppercase.";

  if (std::islower(letter))

    std::cout << "The letter is lowercase.";

  if (std::isdigit(letter))

    std::cout << "I asked you for a letter, not for a digit.";

 
}
