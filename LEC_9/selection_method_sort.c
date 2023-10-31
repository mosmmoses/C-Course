#include "stdio.h"
int main(void) {
  int ar[] = {4, 1, -10, 55, 2, -5};

  size_t n = sizeof(ar) / sizeof(ar[0]);
  int* pCur = ar;

  for (int i = 0; i < (n - 1); ++i) {
    int* pMin = pCur;
    int* pTmp = pCur + 1;
    for (int j = i + 1; j < n; ++j) {
      if (*pTmp < *pMin) pMin = pTmp;
      pTmp++;
    }

    int tmp = *pMin;
    *pMin = *pCur;
    *pCur = tmp;
    pCur++;
  }

  printf("Sorted array: \n");

  for (int i = 0; i < n; i++) {
    printf("%d ", ar[i]);
  }
  printf("\n");
  return 0;
}