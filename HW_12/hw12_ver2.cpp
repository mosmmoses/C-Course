#include <iostream>
#include <vector>
#include <string>

using namespace std;

class RetailItem {
private:
    string description;
    int unitsInStock;
    double price;

public:
    RetailItem(string desc, int units, double cost) {
        description = desc;
        unitsInStock = units;
        price = cost;
    }

    string getDescription() {
      return description;
    }

    int getUnits() {
      return unitsInStock;
    }

    double getPrice() {
      return price;
    }

    friend void ListItems(RetailItem& item);
    friend class CashRegister;
};

void ListItems(RetailItem& item) {
  cout << "Item: " << item.getDescription() << ", Price: " << item.getPrice() << ", Units in stock: " << item.getUnits() << endl;
}

void createItems() {
  RetailItem item1("Jacket", 12, 59.95);
  RetailItem item2("Jeans", 40, 34.95);
  RetailItem item3("Shirt", 20, 24.95);

  ListItems(item1);
  ListItems(item2);
  ListItems(item3);
  
}

class CashRegister {
private:
    vector<RetailItem> itemList;

public:
    void buy_item(RetailItem item) {
        itemList.push_back(item);
    }

    double get_total() {
        double total = 0;
        for (auto item : itemList) {
            total += item.price;
        }
        return total;
    }

    void show_items() {
        for (auto item : itemList) {
            cout << "Item: " << item.description << ", Price: " << item.price << endl;
        }
    }

    void clear() {
        itemList.clear();
    }

};

int main() {
  
  createItems();
  /*
  CashRegister registerr;

  registerr.buy_item(item1);
  registerr.buy_item(item2);
  registerr.buy_item(item3);

  cout << "Total cost: " << registerr.get_total() << endl;

  cout << "Items purchased: " << endl;
  registerr.show_items();

  registerr.clear();
  */
  return 0;
}