#include <cstdio>
#include <vector>

using namespace std;

typedef struct {
  unsigned long long y;
  unsigned long long x;
} coordinates;

unsigned long long diagonal_calc(unsigned long long n) { return ((n * n) - (n - 1)); }

bool is_even(unsigned long long n) {
  if (n % 2 == 0)
    return true;
  else
    return false;
}

unsigned long long solve(coordinates c) {
  coordinates diagonal;
  unsigned long long diagonal_value;
  bool is_up = false;
  bool is_left = false;
  unsigned long long distance;

  if (c.y > c.x) {
    diagonal.y = c.y;
    diagonal.x = c.y;
    is_left = true;
  } else if (c.x > c.y) {
    diagonal.y = c.x;
    diagonal.x = c.x;
    is_up = true;
  } else {
    return diagonal_calc(c.y);
  }

  diagonal_value = diagonal_calc(diagonal.x);

  if (is_up) {
    distance = diagonal.y - c.y;
    if (!is_even(c.x)) // upper is increase
      return diagonal_value + distance;
    else {
      return diagonal_value - distance;
    }
  }

  if (is_left) {
    distance = diagonal.x - c.x;
    if (!is_even(c.y)) // upper is increase
      return diagonal_value - distance;
    else {
      return diagonal_value + distance;
    }
  }

  return 0;
}

int main() {
  unsigned long long t;
  coordinates c;
	vector<unsigned long long> results;

  scanf("%llu", &t);

  for (unsigned long long i = 0; i < t; i++) {
    scanf("%llu %llu", &c.y, &c.x);
		results.push_back(solve(c));
  }

	for (unsigned long long i : results)
		printf("%llu\n", i);

  return 0;
}
