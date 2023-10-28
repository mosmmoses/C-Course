#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  double a = 0;
  double b = 100;
  double arr[30];

  // Initializing the array with rand values from a to b
  for (int i = 0; i < 30; i++) {
    arr[i] = (double)rand() / RAND_MAX * (b - a) + a;
    printf("%f \n", arr[i]);
  }
  printf("\n");

  // Finding the index of the max element
  double max = arr[0];
  int max_index = 0;
  for (int i = 1; i < 30; i++) {
    if (arr[i] > max) {
      max = arr[i];
      max_index = i;
    }
  }

  printf("The maximum value is: %lf\n", max);
  printf("The index of the maximum value is: %d\n", max_index);

  return 0;
}