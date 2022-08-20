#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string s;
  string::size_type longest_length = 0;
  string::size_type shortest_length = 0;
  string::size_type s_length = 0;

  cin >> s;
  longest_length = s.size();
  shortest_length = s.size();

  while (cin >> s) {
    s_length = s.size();
    if (s_length < shortest_length) {
	shortest_length = s_length;
      }
    if (s_length > longest_length) {
      longest_length = s_length;
    }
  }

  cout << "Longest length is : " << longest_length << endl;
  cout << "Shortest length is : " << shortest_length << endl;

  return 0;
}
