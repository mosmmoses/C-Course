#include <iostream>
using namespace std;

class Person 
{
  private:
  string name;
  string surname;
  string address;
  unsigned card_number;
  unsigned bank_account;
  
  public:
  Person(string p_name, string p_surname, string p_address, unsigned p_card_number, unsigned p_bank_account)
  { 
    name = p_name;
    surname = p_surname;
    address = p_address;
    card_number = p_card_number;
    bank_account = p_bank_account;
  }
  
  void print() 
  {
    cout << "Person: " << surname << " " << name << "\tCard number: " << card_number << endl;
  }

  void setName(string p_name) 
  { 
    name = p_name;
  }

  void setSurname(string p_surname){
    surname = p_surname;
  }

  void setAddress(string p_address){
    address = p_address;
  }

  void setCard(unsigned p_card_number) 
  { 
    card_number = p_card_number;
  }

  void setBank(unsigned p_bank_account){
    bank_account = p_bank_account;
  }

  string getName()
  {
    return name;
  }

  string getSurame()
  {
    return surname;
  }

  string getAddress(){
    return address;
  }
  
  unsigned getCard(){
    return card_number;
  }

  unsigned getBank(){
    return bank_account;
  }

};

int main()
{
    Person moses{"Moses", "Moss", "Miracle st. 123", 123456789, 1212121212};
    //Person moses{"Moses", "Moss", 123456789};
    // изменяем номер карты
    moses.setCard(987654321);
    moses.print(); // Name: Moses   Card: 987654321

    //отдельно получаем фамилию
    cout << "Person's surname: " << moses.getSurame() << endl;
    cout << "Addres: " << moses.getAddress() << endl;
    cout << "Bank account: " << moses.getBank() << endl;
}