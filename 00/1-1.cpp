#include <string>
#include <iostream>

int main()
{
  // VALID - a string variable defined with an explicit initial value
  const std::string hello = "Hello";

  // VALID - a string variable defined constructed using the previous string variable
  // and two string literals concatenated together
  const std::string message = hello + ", world" + "!";

  std::cout << hello << std::endl;
  std::cout << message << std::endl;
}

  
