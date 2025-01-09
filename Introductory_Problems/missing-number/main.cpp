#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  string line1;
  string line2;
  int last_number;
  // vector<int> numbers;
  unordered_set<int> numbers_set;

  getline(cin, line1);
  last_number = stoi(line1);
  vector<int> normal;
  for (int i = 1; i <= last_number; i++) {
    normal.push_back(i);
  }

  getline(cin, line2);
  string s;
  stringstream ss(line2);
  while (getline(ss, s, ' ')) {
    // numbers.push_back(stoi(s));
    numbers_set.insert(stoi(s));
  }

  for (int i = 1; i <= last_number; i++) {
    if (numbers_set.find(i) == numbers_set.end()) {
      cout << i << endl;
      break;
    }
  }

  return 0;
}
