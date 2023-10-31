#include "stdio.h"
#include "stdlib.h"

int main(void) {
  int N = 10; // assuming the size of array ar1 is 10
  
  int *ar1 = malloc(N * sizeof(int)); // dynamic memory allocation
  
  // calculate the address of the 5th element
  int *address = &ar1[4];
  
  printf("Address of the 5th element: %p\n", address);
  
  free(ar1); // free allocated memory
  
  return 0;
}