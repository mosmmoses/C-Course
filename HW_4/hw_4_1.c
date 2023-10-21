#include "stdio.h"

int main(void) {
  int outer = 1;
  while (outer <= 5) {
    int inner = 1;
    // Сдвигаем символы вправо
    int i = 5 - outer;
    while (i > 0) {
      printf(" ");
      --i;
    }

    while (inner <= outer) {
      printf("%d", inner++);
    }

    // Вставляем символ новой строки в конце каждого ряда
    printf("\n");
    ++outer;
  }
  return 0;
}
