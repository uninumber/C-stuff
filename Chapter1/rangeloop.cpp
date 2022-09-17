#include <iostream>


int main()
{
  int total {};
  int values[] {2, 1, 5, 6, 7, 3, 4};
  int x {};

  for (int x : values) {
    total+=x;
  std::cout << total;
}
}
