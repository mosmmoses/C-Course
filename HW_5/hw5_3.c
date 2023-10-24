#include <stdio.h>

int main() {
  int height;
  printf("Enter height of the triangle: ");
  scanf("%d", &height);

  int spaces = height - 1;
  int triangles = 1;

  for (int i = 0; i < height; i++) {
      for (int j = 0; j < spaces; j++) {
          printf(" ");
      }
      for (int k = 0; k < triangles; k++) {
          printf("^");
      }
      printf("\n");

      spaces--;
      triangles += 2;
  }

  return 0;
}