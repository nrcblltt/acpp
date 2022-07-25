#include <iostream>
#include <string>

int main()
{
  std::cout << "Please enter your first name: ";

  std::string name;
  std::cin >> name;

  const std::string greeting = "Hello, " + name + "!";

  // the number of blanks surrounding the greeting
  const int pad = 1;

  // the number of rows and columns to write
  const int rows = pad * 2 + 3;
  const std::string::size_type cols = greeting.size() + pad * 2 + 2;
    
  // separate the output from the input
  std::cout << std::endl;

  // write rows rows of input
  int r = 0;
  
  // invariant: we have written r rows so far
  while (r != rows) {

    std::string::size_type c = 0;

    // invariant: we have written c characters so far in the current row
    while (c != cols) {
      // write one or more characters
      // adjust the value of c to mantain the invariant
    }
    
    std::cout << std::endl;
    ++r;
  }
  
  return 0;
}
