#include <iostream>
#include <iomanip>

double average(double array[], const size_t count);

int main()
{
  double values[] {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
  std::cout << "Average=" << average(values, std::size(values));
}

double average(double array[], const size_t count)
{
  double sum {};
  for (int i {}; i<count; ++i)
    sum+=array[i];
  return sum/count;
}
