#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include "checkupp.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {

  string s;
  vector<string> sv;
  vector<string> upps;
  vector<string> lowcs;

  while (cin >> s)
    sv.push_back(s);

  sort(sv.begin(), sv.end());

  for (vector<string>::const_iterator it = sv.begin(); it != sv.end(); ++it) {
    if (checkupp(*it))
      upps.push_back(*it);
    else
      lowcs.push_back(*it);
  }

   for (vector<string>::const_iterator it = lowcs.begin(); it != lowcs.end(); ++it)
     cout << *(it) << endl;

   for (vector<string>::const_iterator it = upps.begin(); it != upps.end(); ++it)
     cout << *(it) << endl;
  
  return 0;
}
