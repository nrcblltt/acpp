#include <iostream>
#include <string>

int main()
{
  { std::string s = "a string";
    { std::string x = s + ", really";
      std::cout << s << std::endl; }
    std::cout << x << std::endl;
  }
  return 0;
}

// NOT VALID x in line 9 doesn't exist anymore
// g++ says 'x' was not declared in this scope
