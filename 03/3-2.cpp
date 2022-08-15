#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::sort;
using std::string;
using std::streamsize;
using std::vector;

int main()
{
  // prepare to store integers (read as double)
  vector<double> integers;
  double x;
  
  cout << "Please enter your integers (stop with end-of-file)" << endl;
  
  // invariant:
  // integers contains all the integers read so far
  while (cin >> x)
    integers.push_back(x);

  // check that the user entered at least four integers
  typedef vector<double>::size_type vec_sz;
  vec_sz size = integers.size();
  if (size < 4) {
    cout << endl << "You must enter at least four integers. "
      "Please try again." << endl;
    return 1;
  }

  // sort the integers
  sort(integers.begin(), integers.end());

  // compute the quartiles
  vec_sz mid = size / 2;
  vec_sz quarter = size / 4;
  double first_quartile;
  double second_quartile;
  double third_quartile;
  if (size % 2 == 0)
  {
    second_quartile = (integers[mid] + integers[mid-1]) / 2;
    if (mid % 2 == 0) {
        first_quartile = (integers[quarter] + integers[quarter-1]) / 2;
        third_quartile = (integers[mid+quarter] + integers[mid+quarter-1]) / 2;
    } else {
        first_quartile = integers[quarter];
        third_quartile = integers[mid+quarter];
    }
  } else {
    second_quartile = integers[mid];
    if (mid % 2 == 0) {
        first_quartile = (integers[quarter] + integers[quarter-1]) / 2;
        third_quartile = (integers[mid+1+quarter] + integers[mid+1+quarter-1]) / 2;
    } else {
        first_quartile = integers[quarter];
        third_quartile = integers[mid+1+quarter];
    }
  }
  
  // compute and write the final grade
  streamsize prec = cout.precision();
  cout <<
  "First quartile is: " << setprecision(3) << first_quartile << endl << 
  "Second quartile is: " << second_quartile << endl <<
  "Third quartile is: " << third_quartile << setprecision(prec) << endl;

  return 0;
}
