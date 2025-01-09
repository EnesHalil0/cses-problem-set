#include <cstdio>

#define MAX_INPUT_LEN 1000000

int main() {
  char input[MAX_INPUT_LEN + 1];
  char last_char = ' ';
  size_t rep = 1;
  size_t max_rep = 1;

  if (fgets(input, sizeof(input), stdin) == nullptr)
    return 1;

  // ATTCGGGA
  for (int i = 0; input[i] != '\0'; i++) {
    if (i != 0 && last_char == input[i]) {
      rep++;
      if (rep > max_rep) {
        max_rep = rep;
      }
    } else {
      rep = 1;
    }
    last_char = input[i];
  }

  printf("%zu\n", max_rep);

  return 0;
}
