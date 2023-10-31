// ! Запускать с ссылкой на мат. библиотеку так: gcc hw8_ellipsis.c -lm

#include <math.h>
#include <stdarg.h>
#include <stdio.h>

// n - количество переданных аргументов
double findAverage(int n, ...) {
  double product = 1;

  // получаем доступ к эллипсису через va_list
  va_list list;

  // Инициализируем va_list, используя va_start
  va_start(list, n);

  // Перебираем каждый из аргументов эллипсиса
  for (int arg = 0; arg < n; arg++)
    // Используем va_arg для получения параметров из эллипсиса.
    product *= va_arg(list, int);

  // Выполняем очистку va_list
  va_end(list);

  double gm = pow(product, 1.0 / n);
  return gm;
}

int main() {
  double gmean = findAverage(4, 1, 2, 3, 4);
  printf("%f\n", gmean);
}