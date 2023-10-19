#include <stdio.h>

main () {
  printf("Task 4:\n");
  double a = 2.0;
  double a_squared = a * a;
  double a_fourth = a_squared * a_squared;
  double a_tenth = a_fourth * a_fourth * a_squared;

  printf("a^4: %lf\n", a_fourth);
  printf("a^10: %lf\n", a_tenth);
  
  return 0;
}
