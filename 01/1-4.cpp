#include <iostream>
#include <string>

int main()
{
  { const std::string s = "a string";
    std::cout << s << std::endl; 

  { const std::string s = "another string";
    std::cout << s << std::endl; }}

  return 0;

}

/*
  VALID
  you can have blocks inside blocks
  the s in the second nested block is different from
  the one defined in the first
*/
