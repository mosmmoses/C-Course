#include "stdio.h"
int main(void) {
  // int x;
  int a[] = {6, 1, -10, 5, 2, -7};
  int size = sizeof(a) / sizeof(a[0]);

  for (int i = 0; i < size; i++) {  // i - номер прохода
    for (int j = size - 1; j > i; j--) {
      if (a[j - 1] > a[j]) {
        int x = a[j - 1];
        a[j - 1] = a[j];
        a[j] = x;
      }
    }
  }

  printf("Sorted array: \n");
  for (int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }

  printf("\n");
  return 0;
}
