int main()
{

  if (auto lower {static_cast<char>(std::tolower(input)) }; lower >= 'a' &&
      lower <= 'z')
    {
      std::cout << "You've entered the letter '" <<lower<<'\'' << std::endl;
    }
  
    
