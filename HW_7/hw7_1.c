#include "stdio.h"
#include "stdlib.h"

int main(void) {
  // Task a
  printf("\nTask a result:\n");
  int arr1[5][7] = {{1, 2, 3, 4, 5, 6, 7},
                    {8, 9, 10, 11, 12, 13, 14},
                    {15, 16, 17, 18, 19, 20, 21},
                    {22, 23, 24, 25, 26, 27, 28},
                    {29, 30, 31, 32, 33, 34, 35}};

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 7; j++) {
      printf("%d ", arr1[i][j]);
    }
    printf("\n");
  }
  // Task b
  printf("\nTask b result:\n");
  int arr2[5][7] = {0};

  int n = 0;
  int m = 0;
  for (int i = 0; i < 5 * 7; i++) {
    arr2[n][m] = i + 1;
    m += 1;
    if (m == 7) {
      m = 0;
      n += 1;
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 7; j++) {
      printf("%d ", arr2[i][j]);
    }
    printf("\n");
  }

  // Task c
  printf("\nTask c result:\n");
  int arr3[5][7] = {0};

  for (int i = 0; i < 5; i++) {
    for (int j = 1; j <= 7; j++) {
      arr3[i][j] = (i * 7) + j;
      printf("%d ", arr3[i][j]);
    }
    printf("\n");
  }

  return 0;
}
