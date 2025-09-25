#include <iostream>
#include <iomanip>

int main() {

  // get the previous width
  std::streamsize width = std::cout.width();
  
  for (double i = 1; i < 1000; ++i) {
    std::cout << std::setw(3)
	      << i << " "
	      << std::setw(5)
	      << i*i << std::endl;
  }

  std::setw(width);
  
  return 0;
}
