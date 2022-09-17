#include <iostream>

int main()
{
  int age {};
  double income {};
  double balance {};
  double loan {};

  std::cout << "Enter your age: ";
  std::cin >> age;
  std::cout << "Enter your income: ";
  std::cin >> income;
  std::cout << "Enter your bank account balance: ";
  std::cin >> balance;

  if (age>=21 && (balance>=20'000 || income>=5'000))
    {
      if (loan=income*2<balance/2? income*2 : balance/2)

      std::cout << "Your loan is: " << loan << std::endl;

      else
	  std::cout << "Sorry you can't have loan.";	
    }
}
