#include <iostream>

int main()
{
  const char* pgenius1 {"Dennis Ritchie"};
  const char* pgenius2 {"Bjarne Stroustrap"};
  const char* pgenius3 {"Alan Turing"};
  const char* pgenius4 {"John von Neuman"};
  const char* pgenius5 {"Richard Feynman"};
  const char* pstr {"Your genius is: "};

  std::cout << "Pick a genius. Enter a number between 1 and 5:";
  size_t choice {};
  std::cin >> choice;

  switch (choice)
    {
    case 1: std::cout << pstr << pgenius1 << std::endl; break;
    case 2: std::cout << pstr << pgenius2 << std::endl; break;
    case 3: std::cout << pstr << pgenius3 << std::endl; break;
    case 4: std::cout << pstr << pgenius4 << std::endl; break;
    case 5: std::cout << pstr << pgenius5 << std::endl; break;
    default: std::cout << "Sorry, you have no genius, try another number."
		       << std::endl;
    }
}

      
