#include <string>
#include <iostream>

int main()
{
  // VALID - a string variable defined with an explicit initial value
  const std::string exclam = "!";

  // NOT VALID - can't concatenate two string literals
  // const std::string message = "Hello" + ", world" + exclam;

  std::cout << exclam << std::endl;
  // std::cout << message << std::endl;
}
