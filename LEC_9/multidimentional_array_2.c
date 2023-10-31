#include "stdio.h"
#include "stdlib.h"

int main(void) {
  const int N = 10; 
  int ar1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *par1 = ar1;

  //int address  = (int)&ar1[4];
  int address  = ar1 + 5*sizeof(int);
  printf( "Address of the 5th element: %p\n", address);
//  printf("Address of the 5th element: %p\n", &ar1[4]);
  
  int ar2[5][8];
  //int address2 = (int)&ar2[4][7];
  int address2 = ar2 + 4*8*sizeof(int) + 7*sizeof(int);
  printf("Address of the (4,7)th element: %p\n", (void*)address2);

  int ar3[5][5][6];
  int* address3 = &ar3[2][3][5];

  printf("Address of the (2,3,5)th element: %p\n", (void*)address3);

  return 0;
}