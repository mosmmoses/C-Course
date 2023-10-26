#include "stdio.h"
int main(void) {
  int x = 1;
  
  int *ptr = &x;
  *ptr = 100;
  printf("x = %d\n", x);
  
  printf("\n");
  return 0;
}
