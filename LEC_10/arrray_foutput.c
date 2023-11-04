#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], int n){
  for (int k=0; k<n; k++){
  printf("arr[%d] = %d\t", k, arr[k]);
  }
  printf("\n");
}

void print_arr2(int arr[][5], int k, int n){
  for (int i=0; i<k; i++,printf("\n"))
  for(int j=0; j<n; j++)
  printf("arr[%d][%d] = %d\t", i, j, arr[i][j]);
  printf("\n");
}

int main(void){
  int q[5] = {5,4,2,3,4};
  int q2[2][5] = { {1,2,3,4,5}, {0,9,8,7,6} };
  print_arr(q,5);
  printf("\n");
  print_arr2(q2,2,5);
  return 0;
}