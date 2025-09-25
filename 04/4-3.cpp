#include <iostream>
#include <iomanip>

int length(int n) {
  int count = 1;
  while (n/10 > 0) {
    ++count;
    n /= 10;
  }
  return count;
}


int main() {
  
  // get the previous width
  std::streamsize width = std::cout.width();

  std::streamsize maxLengthFirst = length(999);
  std::streamsize maxLengthSecond = length(999*999);

  std::cout << "First col is: " << maxLengthFirst
       << " Second is: " << maxLengthSecond << std::endl;
  
  for (int i = 1; i < 1000; ++i) {
    std::cout << std::setw(maxLengthFirst)
	      << i << " "
	      << std::setw(maxLengthSecond)
	      << i*i << std::endl;
  }

  std::setw(width);
  
  return 0;
}
