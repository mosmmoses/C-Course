#include "stdio.h"

int main() {
  char* pStr = "asdfn ddf ddd ffff";
  printf("Origin string: %s\n", pStr);
  
  //char* str = pStr;
  char* read = pStr;
  char* write = pStr;
  
  while (*read != '\0') {
    if (*read != ' ') {
      *write = *read;
      write++;
    }
    read++;
  }
  *write = '\0';
  
  printf("Modified string: %s\n", pStr);
  
  return 0;
}