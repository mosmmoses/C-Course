#include <stdio.h>
#include <stdlib.h>

int main(){
  char * pStr = "asdfn ddf ddd ffff";
  printf("%s\n", pStr);
  char* str = pStr;
  size_t sz = sizeof(pStr);
  char *pStrNew = (char*)calloc(sz, sizeof(char));
  int step = 0;
  
  while (*str !='\0'){
    if (*str !=' '){
      *pStr = *str;
      *pStr++;
      step++;
    }
    str++;
  }
  *pStrNew = '\0';

  for(int i = 0; i < step; ++i){
    pStrNew--;
  }
  printf("%p\n", pStrNew);
}