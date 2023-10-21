#include <stdio.h>

int main(void) {

  int num;
  int product = 1;

  printf("Enter a number: ");
  scanf("%d", &num);

  for ( int i = 8; i <= num; i++) {
    product *= i; 
  }

  printf("Product of numbers from 8 to %u: %u \n", num, product);
  return 0;
}
