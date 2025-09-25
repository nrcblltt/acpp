#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::endl;
using std::istream;

istream& readwords(istream& is, vector<string>& sv) {
  string s;
  while(is >> s) {
    sv.push_back(s);
  }
  return is;
}

int main() {

  vector<string> sv;
  readwords(cin, sv);
  
  cout << sv.size() << endl;

  return 0;
}
    
    
