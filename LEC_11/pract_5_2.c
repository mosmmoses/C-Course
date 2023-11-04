#include <stdio.h>

int fibonachi2(int n)
{
  int result = 0;
  int b = 1;
  int tmp;
  
  for (int i = 0; i < n; i++)
  {
    tmp = result;
    result = b;
    b += tmp;
  }
  
  return result;
}

int main (void)
{
  int fib4 = fibonachi2 (4);
  int fib5 = fibonachi2 (5);
  int fib6 = fibonachi2 (6);
  printf ("4 Fibonachi number: %d \n", fib4);
  printf ("5 Fibonachi number: %d \n", fib5);
  printf ("6 Fibonachi number: %d \n", fib6);
  return 0;
}