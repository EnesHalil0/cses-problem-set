#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll solve(ll k) {
  //
  ll max_way = ((k * k) * ((k * k) - 1)) / 2;

  if (k < 2)
    return max_way;

  // number of attack ways
  // 4n^2 - 12n + 8
  ll attack_way = (4 * k * k) - 12 * k + 8;

  return max_way - attack_way;
}

int main() {
  ll n;
  cin >> n;

  for (ll i = 1; i <= n; i++) {
    cout << solve(i);
    cout << "\n";
  }

  return 0;
}
