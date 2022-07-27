#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  // form a square
  const int side = 4;
  int r = 0;

  while (r != side) {
    int c = 0;

    while (c != side) {
      if (r == 0 || r == side - 1 || c == 0 || c == side - 1) {
	cout << "*";
      } else {
	cout << " ";
      }
      ++c;
    }
    
    cout << endl;
    ++r;
  }

  cout << endl;
  
  // form a rectangle
  const int length = 12;
  const int width = 3;

  r = 0;

  while (r != width) {
    int c = 0;

    while (c != length) {
      if (r == 0 || r == width - 1 || c == 0 || c == length - 1) {
	cout << "*";
      } else {
	cout << " ";
      }
      ++c;
    }
    
    cout << endl;
    ++r;
  }

  cout << endl;
  
  // form a triangle
  const int base = 5;
  const int height = 3; 

  r = 0;
  int shift = 0;

  while (r != height) {

    int c = 0;

    while (c != base) {
      if (r == 0 || c == shift || c == base - shift - 1) {
	cout << "*";
      } else {
	cout << " ";
      }
      ++c;
    }

    cout << endl;
    ++r;
    ++shift;
  }
  
  return 0;
}
