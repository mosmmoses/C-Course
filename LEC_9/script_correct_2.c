#include <stdio.h>

void removeSpaces(char* str) {
  char* read = str;
  char* write = str;
  
  while (*read) {
    if (*read != ' ') {
      *write = *read;
      write++;
    }
    
    read++;
  }
  
  *write = '\0';
}

int main() {
  char str[] = "asdfn ddf ddd ffff";
  printf("Original string: %s\n", str);
  
  removeSpaces(str);
  
  printf("String without spaces: %s\n", str);
  
  return 0;
}