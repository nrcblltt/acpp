#include <iostream>

int main()
{
  int k = 0;
  while (k != 10) {
    using std::cout; // the scope of this statement is the while's one
    cout << "*";
    ++k;
  }
  std::cout << std::endl;
  return 0;
}
