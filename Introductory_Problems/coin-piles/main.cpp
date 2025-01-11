#include <bits/stdc++.h>
using namespace std;
#define ll long long

string solve(ll a, ll b) {
    if (a < 0 || b < 0) return "NO";
    if ((a + b) % 3 != 0) return "NO";
    return (min(a, b) * 2 >= max(a, b)) ? "YES" : "NO";
}

int main() {
    ll t, a, b;
    cin >> t;
		vector<string> res;
    
    while (t--) {
        cin >> a >> b;
				res.push_back(solve(a, b));
    }

		for (string s : res)
			cout << s << "\n";
    
    return 0;
}
