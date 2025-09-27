#include "checkupp.h"
#include <string>
#include <cctype>

using std::string;

bool checkupp(const string& s) {
  for (string::const_iterator it = s.begin(); it != s.end(); ++it) {
    if (isupper(*it))
      return true;
  }
  return false;
}
  
