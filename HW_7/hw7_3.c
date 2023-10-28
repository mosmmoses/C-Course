#include <stdio.h>
#include <stdlib.h>

int main() {
  // Creating a dynamic array 
  int x = 3;
  int y = 5;
  int z = 7;
  
  // Allocate memory for each layer
  int ***arr = (int ***)malloc(x * sizeof(int **));
  // Allocate memory for each row 
  for (int i = 0; i < x; i++) {
      arr[i] = (int **)malloc(y * sizeof(int *));
    // allocate memory for each column
    for (int j = 0; j < y; j++) {
      arr[i][j] = (int *)malloc(z * sizeof(int));
    }
  }

  // Initializing and output of 3D array
  for (int i = 0; i < x; i++){
    for (int j = 0; j < y; j++){
      for (int k = 0; k < z; k++){
        arr[i][j][k] = i + j + k;
        printf("%d ", arr[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }
  
  // Deallocate memory for each column 
  for (int i = 0; i < x; i++) {
    // Deallocate memory for each row
    for(int j = 0; j < y; j++){
      free(arr[i][j]);
    }
    free(arr[i]);
  }
  // Deallocate memory for the array itself
  free(arr);

  printf("\n");
  return 0;
}
