#include <stdio.h>

int main(void) {
  int a, b;
  printf("Enter two integers: a,b \n");
  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("Result: a = %d , b = %d\n", a, b);
  return 0;
}
