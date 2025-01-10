#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main() {
  ll n;
  cin >> n;

  if (((n * (n + 1)) / 2) % 2 != 0) {
    cout << "NO\n";
    return 0;
  }

  cout << "YES\n";

  vector<ll> n1;
  vector<ll> n2;

  if (!(n % 2)) {
    for (int i = 0; i + 1 < n / 2; i += 2) {
      n1.push_back(1 + i);
      n1.push_back(n - i);

      n2.push_back(2 + i);
      n2.push_back(n - i - 1);
    }
  } else {
    bool x = true;
		n2.push_back(n);
    for (int i = 1; i < n; i += 2) {
      if (x) {
        n1.push_back(i);
        n1.push_back(i + 1);
        x = false;
      } else {
        n2.push_back(i);
        n2.push_back(i + 1);
				x = true;
			}
    }
  }

  sort(n1.begin(), n1.end());
  sort(n2.begin(), n2.end());

  cout << n1.size() << "\n";
  for (ll i : n1) {
    cout << i << " ";
  }
  cout << "\n";
  cout << n2.size() << "\n";
  for (ll i : n2) {
    cout << i << " ";
  }
  cout << "\n";

  return 0;
}
