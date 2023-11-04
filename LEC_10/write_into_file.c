#include <stdio.h>

void writeToFile(char *filename, char *text) {
  FILE *fp = fopen(filename, "w");
  
  if(fp)
  {
    fputs(text, fp); // записываем строку
    fclose(fp);
    printf("File has been written\n");
  }
}

int main(void)
{
  // строка для записи
  char * message = "mur mur murrrrrrrrrrrrrrr";
    // файл для записи
  char * filename = "data.txt";
  // запись в файл
  writeToFile(filename, message);
}