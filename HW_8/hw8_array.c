#include <stdio.h>

void writeToFile(char* filename, char* text) {
  FILE* fp = fopen(filename, "w");

  if (fp) {
    fputs(text, fp);  // записываем строку
    fclose(fp);
    printf("File has been written...\n");
  }
}

void readFromFile(char* filename) {
  // буфер для считывания данных из файла
  char buffer[256];
  // чтение из файла
  FILE* fp = fopen(filename, "r");

  if (fp) {
    // пока не дойдем до конца, считываем по 256 байт
    while ((fgets(buffer, 256, fp)) != NULL) {
      printf("%s", buffer);
    }

    fclose(fp);
  }
}

void bubbleSort(int* arr, int size) {
  int i, j;
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void readNumbersFromFile(char* filename, int* array, int* arraySize) {
  FILE* file = fopen(filename, "r");

  int number;
  *arraySize = 0;

  while (fscanf(file, "%d", &number) == 1 && *arraySize < 256) {
    array[(*arraySize)++] = number;
  }

  fclose(file);
}

void writeNumbersToFile(char* filename, int* array, int arraySize) {
  FILE* file = fopen(filename, "w");

  for (int i = 0; i < arraySize; i++) {
    fprintf(file, "%d ", array[i]);
  }

  fclose(file);
}

int* sortArrayDescending(int* arr, int size) {
  bubbleSort(arr, size);
  return arr;
}

int main() {
  // массив для записи
  char* strarray = "5 2 4 1 3";
  // файл для записи
  char* filename = "data.txt";
  // запись в файл
  writeToFile(filename, strarray);
  printf("Original file: \n");
  readFromFile("data.txt");

  int arr[256];
  int size;

  readNumbersFromFile("data.txt", arr, &size);

  int* sortedArr = sortArrayDescending(arr, size);

  writeNumbersToFile("sorted_data.txt", sortedArr, size);

  printf("\nSorted numbers from file: \n");

  readFromFile("sorted_data.txt");
  printf("\n");
  return 0;
}