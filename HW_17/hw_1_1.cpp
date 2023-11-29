// Умный указатель std::unique_ptr

#include <iostream>
#include <memory> // для std::unique_ptr

class Item
{
public:
  Item() { std::cout << "Item acquired\n"; }
  ~Item() { std::cout << "Item destroyed\n"; }
};

int main()
{
  // Выделяем объект класса Item и передаем право собственности на него std::unique_ptr
  std::unique_ptr<Item> item(new Item);

  return 0;
} // item выходит из области видимости здесь, соответственно, Item уничтожается также здесь