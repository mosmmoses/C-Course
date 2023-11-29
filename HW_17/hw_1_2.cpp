// Доступ к объекту, который хранит умный указатель
#include <iostream>
#include <memory> // для std::unique_ptr

class Item
{
public:
  Item() { std::cout << "Item acquired\n"; }
  ~Item() { std::cout << "Item destroyed\n"; }
  friend std::ostream& operator<<(std::ostream& out, const Item &item)
  {
    out << "I am an Item!\n";
    return out;
  }
};

int main()
{
  std::unique_ptr<Item> item(new Item);

  if (item) // используем неявное преобразование item в тип bool, чтобы убедиться, что item владеет Item-ом
    std::cout << *item; // выводим Item, которым владеет item

  return 0;
}