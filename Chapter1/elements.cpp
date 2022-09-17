#include <iostream>
#include <iomanip>

int main()
{
  const int max_length {100};
  char text[max_length] {};

  std::cout << "Enter a line of text: " << std::endl;

  //Read a line of characters including spaces

  std::cin.getline(text, max_length);
  std::cout << "You entered:\n" << text << std::endl;

  size_t vowels {};
  size_t consonants {};

  for (int i {}; text[i]!='\0'; i++)
    {
      if (std::isalpha(text[i]))
	{
	  switch (std::tolower(text[i]))
	    {
	    case 'a' : case 'e' : case 'u' : case 'y' : case 'o' : case 'i':
	      ++vowels;
	      break;

	    default:
	      ++consonants;
	    }
	}
    }
  std::cout << "Your input contained: " << vowels << " vowels and "
	    << consonants << " consonants.\n";
}
