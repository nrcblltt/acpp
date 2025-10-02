#include <iostream>
#include <string>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

bool is_palindrome(string s) {
  string::size_type i, j;
  i = 0;
  j = s.length() - 1;
  while (i < j) {
    if (s[i] != s[j])
      return false;
    ++i;
    --j;
  }
  return true;
}

int main() {
  string s;
  list<string> ls;
  string::size_type maxp = 0;
  string longestpal;

  cout << "Please input some words:" << endl;
  
  while(cin >> s)
    ls.push_back(s);

  list<string>::const_iterator li = ls.begin();
       
  while (li != ls.end()) {
    if (!is_palindrome(*li)) {
      li = ls.erase(li);
    } else {
      if ((*li).size() > maxp) {
        maxp = (*li).size();
	longestpal = *li;
      }
      ++li;
    }
  }

  // outputs the first palindrome of maxp length
  if (ls.size() > 0) {
    cout << "Here are the palindromes: " << endl;
    for (list<string>::const_iterator li = ls.begin(); li != ls.end(); ++li)
      cout << *li << endl;
    cout << "The longest is: " << longestpal << endl;
  } else {
    cout << "There were no palindromes." << endl;
  }
  
  return 0;
}
