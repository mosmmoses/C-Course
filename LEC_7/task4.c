#include <stdio.h>

int main() {
  int prod = 1;
  for (int i = 10; i <= 99; i++) {
    if (i % 2 != 0 && i % 13 == 0) {
      prod *= i;
    }
  }
  printf("%d\n", prod);
  return 0;
}