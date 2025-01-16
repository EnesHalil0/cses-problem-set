#include <bits/stdc++.h>
using namespace std;

uint b2g(uint n) { return n ^ (n >> 1); }

int main() {
  uint n;
  cin >> n;

  uint x = (1 << n);

  for (uint i = 0; i < x; i++) {
    printf("%0*b\n", n, b2g(i));
  }

  return 0;
}
