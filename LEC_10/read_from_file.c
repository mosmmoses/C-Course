#include <stdio.h>

void readFromFile(char *filename) {
  // буфер для считывания данных из файла
  char buffer[256];
  // чтение из файла
  FILE *fp = fopen(filename, "r");
  if(fp) {
    // пока не дойдем до конца, считываем по 256 байт
    while((fgets(buffer, 256, fp))!=NULL){
      printf("%s", buffer);
    }

    fclose(fp);
  }
}

int main(void){
  // файл чтения
  //char * filename = "data.txt";
  readFromFile("data.txt");
  printf("\n");
}