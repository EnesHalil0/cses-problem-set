#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  string line1;
  size_t n;
  getline(cin, line1);
  n = stoi(line1);

  string line2;
  getline(cin, line2);
  string s;
  stringstream ss(line2);
  /*while (getline(ss, s, ' ')) {*/
  /*}*/

  unsigned long long num, pre;
  unsigned long long move = 0;
  for (size_t i = 0; i < n; i++) {
    getline(ss, s, ' ');
	num = stoi(s);

	if (i == 0) {
	  pre = num;
	  continue;
	}

	if (pre > num) {
	  move += pre - num;
	  num = pre;
	}

	pre = num;
  }

  cout << move << endl;

  return 0;
}
