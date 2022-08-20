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
    vector<string> words;
    string s;

    cout << "Please enter some words: " << endl;

    while (cin >> s) {
        words.push_back(s);
    }

    sort(words.begin(), words.end());

    int i = 0;
    
    while(i < words.size())
    {
        string word = words[i];
        int count = 1;
        while(i < words.size() && word == words[i+1]) {
            ++count;
            ++i;
        }
        cout << word << " appears " << count << " times " << endl;
        ++i;
    }

    return 0;        
}
