#include "stdio.h"
int main(void) {
  int N, M, L;
  
  int arr[4] = {0, 1, 2, 3};
  
  int arr2[4][6] = {{0,1,2,3,4},{0,1,2,3,4}};

  int arr3[2][3][4] = {
  {{0,1},{0,1},{0,1},{0,1}},
  {{2,3},{2,3},{2,3},{2,3}},
  {{4,5},{4,5},{4,5},{4,5}}
  };
  printf("%d\n", arr3[1][2][1]);
  printf("\n");
  return 0;
}