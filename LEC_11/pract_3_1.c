#include <stdio.h>

int
add (int x, int y)
{
  return x + y;
}

int
subtract (int x, int y)
{
  return x - y;
}

int
main (void)
{
  int a = 10;
  int b = 5;
  int result;
  int (*operation) (int, int);
  operation = add;
  result = operation (a, b);
  printf ("result = %d \n", result); // result=15
  operation = subtract;
  result = operation (a, b);
  printf ("result = %d \n", result); // result=5
  return 0;
}