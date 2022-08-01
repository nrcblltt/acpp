#include <iostream>
using std::cout;
using std::cin;


int main() {
  int first;
  int second;
  
  cout << "enter the first number: ";
  cin >> first;

  cout << "enter the second number: ";
  cin >> second;

  cout << "the largest number is ";
  if (first > second)
    cout << first;
  else cout << second;
  cout << std::endl;

  return 0;
}
	       
  
