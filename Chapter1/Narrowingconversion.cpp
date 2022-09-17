int main()
{
  int banana_count = 5.3; // May compile without warning
  int coconut_count(7.5);  // May compile without warning
  int papaya_count{0.3}; // At least a compiler warning, ofter an error
}
