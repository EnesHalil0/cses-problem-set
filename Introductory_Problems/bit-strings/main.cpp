#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MOD = 1e9 + 7;

int main() {
  ll n;
  cin >> n;

  ll res = 1;
  ll base = 2 % MOD;
  while (n > 0) {
    if (n % 2 == 1) {
      res = (res * base) % MOD;
    }

    base = (base * base) % MOD;
    n /= 2;
  }

	cout << res << "\n";

  return 0;
}
