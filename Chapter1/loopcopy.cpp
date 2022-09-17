#include <iostream>

int main()
{
  unsigned const size{6};

  unsigned weight[size] {54, 66, 76, 88, 100, 92};

  unsigned total {};

  for (size_t i {}; i<size; ++i)
    {
      total+=weight[i];
    }

  unsigned average {total/size};

  std::cout << "The average weight is: " << average << std::endl;

  unsigned count {};

  for (size_t i {}; i<size; ++i)
    {
      if (weight[i] < average) ++count;
    }
  std::cout << count << " people are below than average weight";
}
