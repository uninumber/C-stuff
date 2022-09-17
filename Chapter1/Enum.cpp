#include <iostream>
#include <iomanip>

int main()
{

  enum class Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

  Day today {Day::Tuesday}, tomorrow {Day::Wednesday}, yesterday {Day::Monday};

  enum class Punctuation {Comma = ',', Exclamation = '!', Question = '?'};

  Punctuation ch = {Punctuation::Comma};

  Day poets_day = {Day::Friday};

  std::cout << "Today is: (" << static_cast<int>(today)
	    << ")" << static_cast<char>(ch) << " but poets_day is: ("
	    << static_cast<int>(poets_day) << ")" << static_cast<char>(Punctuation::Exclamation) << "\n";

  today = {Day::Wednesday};

  ch = {Punctuation::Question};

  poets_day = {Day::Friday};


  std::cout << "Is today (" << static_cast<int>(today) << "), the same like poets day ("
	    << static_cast<int>(poets_day) << ")" << static_cast<char>(ch) << "\n";
}
