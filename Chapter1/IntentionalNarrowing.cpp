int main()
{
  double value1 {10.9};
  double value2 {15.9};

  //int whole_number {static_cast<int>(value1) + static_cast<int>(value2)};
  //The example above gets result 25, meaning loss the information.

  int whole_number {static_cast<int>(value1+value2)};
  //This is work correctly
}
