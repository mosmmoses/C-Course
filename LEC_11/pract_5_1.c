#include <stdio.h>

int fibonachi (int n)
{
  if (n == 0 || n == 1)
    return n;
  return fibonachi (n - 1) + fibonachi (n - 2);
}

int main (void)
{
  int fib4 = fibonachi (4);
  int fib5 = fibonachi (5);
  int fib6 = fibonachi (6);
  printf ("4 Fibonachi number: %d \n", fib4);
  printf ("5 Fibonachi number: %d \n", fib5);
  printf ("6 Fibonachi number: %d \n", fib6);
  return 0;
}