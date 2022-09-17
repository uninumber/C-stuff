#include <iostream>
#include <iomanip>

int main()
{
  int product {};
  int quantity {};
  double unit_price {};
  double total_cost {};

  std::cout << "Enter a product number, quantity and price:";
  std::cin >> product >> quantity >> unit_price;

  total_cost=(unit_price*quantity);

  std::cout << std::fixed << " Product\n " << std::setw(6)
	    << product << " Quantity\n " 
	    << std::setw(5) << quantity 
	    << " Unit Price " << std::setw(5)
	    << "$" << unit_price << std::setw(5)
	    << " Cost " << total_cost;
}
