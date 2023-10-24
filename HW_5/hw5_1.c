#include <stdio.h>
#include <stdbool.h>

int main() {
  bool b = true;
  int num = 200;

  while (b) {
    if (num % 17 == 0) {
      b = false;
    }
    else num++;
  }

  printf("Result: %d\n", num);
  return 0;
}