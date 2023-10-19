#include <stdio.h>

main () {
  printf("Task 1:\n");
  double num1, num2;
  printf("Enter the first number: ");
  scanf("%lf", &num1);
  
  printf("Enter the second number: ");
  scanf("%lf", &num2);
  if (num1 > num2) {
    printf("First number is greater: %.2lf\n", num1);
  } 
  
  else {
    printf("First number is not greater: %.2lf and %.2lf\n", num1, num2);
  }

  return 0;
}
