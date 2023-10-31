#include "stdio.h"
int main(void) {
  int ar[] = {4, 1, -10, 55, 2, -5};

  size_t n = sizeof(ar) / sizeof(ar[0]);
  int* pCur = ar;

  for (int i = 0; i < n - 1; ++i) {
    int min = i;
    for (int j = i + 1; j < n; ++j) {
      if (ar[j] < ar[min]) min = j;
    }
    int temp = ar[min];
    ar[min] = ar[i];
    ar[i] = temp;
  }

  printf("Sorted array: \n");

  for (int i = 0; i < n; i++) {
    printf("%d ", ar[i]);
  }
  printf("\n");
  return 0;
}