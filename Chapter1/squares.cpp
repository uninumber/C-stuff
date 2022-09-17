#include <iostream>

int main()
{
  int limit {};
  int ans {};

  std::cout << "Enter a limit: ";
  std::cin >> limit;

  for (int i {}; i<=limit; ++i)
    {
      ans=i*i;
      std::cout << ans << std::endl;
    }
}
