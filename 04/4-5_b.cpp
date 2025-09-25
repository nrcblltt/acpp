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

  if (sv.size() == 0)
    cout << "No words were given." << endl;
    
  sort(sv.begin(), sv.end());
  
  vector<string>::size_type i = 0;
  vector<string>::size_type count = 0;
  vector<string>::size_type j;
  
  while (i < sv.size()) {
    j = i;
    while (j < sv.size() && sv[i] == sv[j]) {
      ++j;
      ++count;
    }
    cout << sv[i] << ": " << count << endl;
    count = 0;
    i = j;
  } 

  return 0;
}
    
    
