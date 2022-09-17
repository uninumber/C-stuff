#include <iostream>

void change_it_by_reference(double& it);
void change_it_by_pointer(double* it);

int main()
{
  double it {5.0};

  change_it_by_reference(it);
  std::cout << "After changing by reference: " << it << std::endl;

  change_it_by_pointer(&it);
  std::cout << "After changing by pointer: " << it << std::endl;

}

void change_it_by_pointer(double* pit)
{
  *pit+=10;
}
void change_it_by_reference(double& pit)
{
  pit+=10;
}
