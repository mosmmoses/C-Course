#include<stdio.h>

int unfactorial(int n) {
  for(int i=1;i<n;i++) {
    n = n/i;
  }
}

int main() {
  int factorial = 120;
  int result = unfactorial(factorial);
  printf("n of factorial %d is %d\n", factorial, result);
  return 0;
}