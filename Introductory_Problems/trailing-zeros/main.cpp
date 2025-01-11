#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main() {
  ll n;
  cin >> n;

  ll c = 0;
  while (n >= 5) {
    n /= 5;
		c = c + n;
  }

	cout << c << "\n";

  return 0;
}
