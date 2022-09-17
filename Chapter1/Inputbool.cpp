#include <iostream>

int main()
{
  int v;

  std::cout << "Please enter integer between 50 || 100 :\n ";
  std::cin >> v;

  if (v!=0)

    std::cout << "Your number difference from zero.\n";

  if (v<50)

    std::cout << "You enter invalid number: less than 50.\n";

  if (v>100)

    std::cout << "You enter invalid number: greater than 100.\n";

  if (v>=50 && v<=100)

    std::cout <<"Your number is: " << v << std::endl;

}
