#include <stdio.h>

#define MIN(A, B) (A <=  B ? printf("%d", A) : printf("%d", B))

int main() {
  int num1, num2;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("Minimum value is: ");
  MIN(num1, num2);

  printf("\n");
  return 0;
}