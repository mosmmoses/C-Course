#include <iostream>
using namespace std;

class Person 
{
  private:
  string name;
  string surname;
  string address;
  unsigned card_number;
  //unsigned bank_account;
  
  public:
  Person(string p_name, unsigned p_card_number)
  { 
    name = p_name;
    card_number = p_card_number;
  }
  
  void print() 
  {
    cout << "Name: " << name << "\tCard: " << card_number << endl;
  }
  
  void setCard(unsigned p_card_number) 
  { 
    card_number = p_card_number;
  }

  string getName()
  {
    return name;
  }
  
  unsigned getCard()
  {
    return card_number;
  }
};

int main()
{
    Person moses{"Moses", "Moss", "Miracle st. 123", 123456789};
    
    // изменяем номер карты
    moses.setCard(987654321);
    moses.print(); // Name: Moses   Card: 987654321

    //отдельно получаем имя
    cout << "Person name: " << moses.getName() << endl;
}