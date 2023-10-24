#include <stdio.h>

#define MIN(type, num1, num2)               \
  ({                                        \
    if (num1 < num2) {                      \
      printf("Minimum value is: %d", num1); \
                                            \ 
} else {                                    \
      printf("Minimum value is: %d", num2); \
    }                                       \
  })

int main() {
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  MIN(int, num1, num2);

  printf("\n");
  return 0;
}
