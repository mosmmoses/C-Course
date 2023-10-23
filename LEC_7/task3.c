#include <stdio.h>

int main() {
  int sum = 0;
  int num = 1;

  while (num <= 99) {
    if (num % 2 != 0) {
      sum += num;
    }
    num++;
  }

  printf("The sum of all odd numbers from 1 to 99 is: %d\n", sum);
  return 0;
}