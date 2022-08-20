#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// this assumes that the user inputs the correct number of elements

int main()
{
  vector<string> names;
  vector<double> grades;

  int stdcount=0;
  int hwkcount = 5;

  string name;

  cout << "Now you can start entering students " << endl;

  while (true)
    {
  
      cout << "Please enter a student's name: ";
      cin >> name;
      names.push_back(name);

      cout << "Please enter the student's midterm and final exam grades: ";
      double midterm, final;
      cin >> midterm >> final;

      cout << "Enter all the student's " << hwkcount << " homework grades: ";
  
      int i = 0;
      double sum = 0;
      double x;

      while (i < hwkcount) {
	cin >> x;
	sum += x;
	++i;
      }

      grades.push_back(0.2 * midterm + 0.4 * final + 0.4 * sum / hwkcount);

      ++stdcount;

      cout << "Input end-of-file if you want to stop entering students" << endl
	   << "or another character if you want to continue." << endl;
      string e;
  
      if (cin >> e)
	continue;
      else
	break;
    }
  
  cout << stdcount << " Students have been read." << endl;

  int j = 0;
  while (j < stdcount) {
    cout << names[j] << " final " << grades[j] << endl;
    ++j;
  }

  return 0;
}

  
  
