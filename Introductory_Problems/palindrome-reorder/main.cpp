#include <bits/stdc++.h>
using namespace std;

int main() {
  //
  string c;
  cin >> c;
  unsigned int cs['Z' - 'A' + 1] = {};
  for (unsigned int cc : c)
    cs[cc - 'A']++;

  unsigned int odd = 0;
  for (unsigned int i : cs) {
    if ((i & 1)) {
      odd++;
    }
  }

  if (odd > 1) {
    cout << "NO SOLUTION\n";
    return 0;
  }

  string out;
  for (unsigned int i = 0; i < 26; i++) {
    if ((cs[i] & 1))
      continue;

    for (unsigned int j = 0; j < cs[i] / 2; j++) {
      out += (i + 'A');
    }
  }
  cout << out;

  for (unsigned int i = 0; i < 26; i++) {
    if (!(cs[i] & 1))
      continue;

    for (unsigned int j = 0; j < cs[i]; j++) {
      /*out += (i + 'A');*/
			cout << (char)(i + 'A');
    }
  }

  reverse(out.begin(), out.end());
  cout << out;

  return 0;
}
