#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int max_even;
  int max_odd;

  if (n % 2 == 0) {
    max_even = n;
    max_odd = n - 1;
  } else {
    max_odd = n;
    max_even = n - 1;
  }

  if (max_even == 2) {
	cout << "NO SOLUTION";
	cout << endl;
	return 0;
  }

  for (int i = 2; i <= max_even; i = i + 2) {
	cout << i << " ";
  }

  for (int i = 1; i <= max_odd; i = i + 2) {
	cout << i << " ";
  }

  cout << endl;

  return 0;
}
