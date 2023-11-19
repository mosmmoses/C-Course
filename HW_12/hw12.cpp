#include <iostream>
#include <vector>
#include <string>

class RetailItem {
private:
    std::string description;
    int unitsInStock;
    double price;

public:
    RetailItem(std::string desc, int units, double cost) {
        description = desc;
        unitsInStock = units;
        price = cost;
    }

    friend void createItems();
    friend class CashRegister;
    
    std::string getDescription() {
      return description;
    }

    int getUnitsInStock() {
      return unitsInStock;
    }

    double getPrice() {
      return price;
    }
};

void createItems() {
    RetailItem item1("Jacket", 12, 59.85);
    RetailItem item2("Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);
}

class CashRegister {
private:
    std::vector<RetailItem> itemList;

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
            std::cout << "Item: " << item.description << ", Price: " << item.price << std::endl;
        }
    }

    void clear() {
        itemList.clear();
    }
};

int main() {
    createItems();
  
    CashRegister registerr;
    
    RetailItem item1("Jacket", 12, 59.85);
    RetailItem item2("Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);
    
    registerr.buy_item(item1);
    registerr.buy_item(item2);
    registerr.buy_item(item3);

    std::cout << "Total cost: " << registerr.get_total() << std::endl;

    std::cout << "Items purchased: " << std::endl;
    registerr.show_items();

    registerr.clear();
  
    return 0;
}
