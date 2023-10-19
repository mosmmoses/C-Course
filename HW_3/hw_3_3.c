#include <float.h>
#include <stdio.h>

main () {
  printf("Task 3: \n");

  double num = DBL_MAX;
  printf("Original number: %lf\n", num);

  num *= 2;
  printf("Overflowed number: %lf\n", num);

  return 0;
}
