#include <iostream>
#include <string>

int main()
{
  { const std::string s = "a string";
    std::cout << s << std::endl; }

  { const std::string s = "another string";
    std::cout << s << std::endl; }

  return 0;

}

/*
  VALID
  you can have blocks inside blocks
  you can reuse the name s in the second inner
  block since it got destroyed after the first block
*/
