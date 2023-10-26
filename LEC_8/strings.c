#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <ctype.h>

void main() {
  char *buffer = (char *)malloc(128);
  char *word = NULL;
  printf("Enter a string: ");
  scanf("%127s", buffer);
  word = (char *)malloc(strlen(buffer) + 1);
  strcpy(word, buffer);
  printf("Your string: %s\n", word);
  free(word);
  //getch();
}