// Частичная специализация шаблона

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

template <class T, int size> // size является non-type параметром шаблона
class StaticArray
{
private:
  // Параметр size отвечает за длину массива
  T m_array[size];

public:

  T* getArray() { return m_array; }

  T& operator[](int index)
  {
    return m_array[index];
  }
};

/*template <typename T, int size>
void print(StaticArray<T, size> &array)
{
  for (int count = 0; count < size; ++count)
    std::cout << array[count] << ' ';
}*/

// Шаблон функции print() с частично специализированным шаблоном класса StaticArray<char, size> в качестве параметра
template <int size> // size по-прежнему является non-type параметром
void print(StaticArray<char, size> &array) // мы здесь явно указываем тип char
{
  for (int count = 0; count < size; ++count)
    cout << array[count];
}

int main()
{
  // Объявляем целочисленный массив
  StaticArray<char, 33> char14;
  strcpy(char14.getArray(), "Hello, Moses <3 I love you, dear");

  // Выводим элементы массива
  print(char14);
  cout << "\n";
  return 0;
}