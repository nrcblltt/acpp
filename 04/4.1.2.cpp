#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;
using std::sort;

int main()
{
  vector<double> hw;
  vector<double>& hw1 = hw;

  hw.push_back(8.2);
  hw.push_back(7.3);
  hw1.push_back(4.5);

  cout << hw[2] << endl;
  cout << hw1[2] << endl;

  const vector<double>& hw2 = hw;

  hw.push_back(4.2);
  hw1.push_back(5.5);
  // hw2.push_back(6.6);
  // sort(hw2.begin(),hw2.end());

  int x = 0;
  int& y = x;
  const int& z = x;

  y = 5;
  // z = 6; cannot assign to a variable with const-qualified type

  cout << "x is: " << x << " y is: " << y << endl;

  // const vector<int> v = {5,4,3,2,1};
  // sort(v.begin(),v.end());
  
  return 0;
}
