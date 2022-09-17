#include <iostream>
#include <iomanip>

int main()
{
  int discount_threshold {20};
  int count {};
  int unit_price {200};
  double discount {0.04};

  int* pcount {&count};
  std::cout << "Enter a number of unit you want: ";
  std::cin >> *pcount;
  std::cout << "The unit price is: "
	    << "$" << unit_price/100.00 << std::endl;

  int* punit_price {&unit_price};
  int price {*pcount * *punit_price};
  auto* pprice {&price};

  double net_price {};
  double* pnet_price {nullptr};
  pnet_price=&net_price;

  if (*pcount>discount_threshold)
    {
      std::cout << "You qualify a discount for "
		<< static_cast<int>(discount*100.00) << " percent.\n";
      *pnet_price=price*(1-discount)/100.00;
    }
  else
    {
      net_price = *pprice/100.00;
    }
  std::cout << "The net price for " << *pcount
	    << " items is: " << net_price << std::endl;
}

