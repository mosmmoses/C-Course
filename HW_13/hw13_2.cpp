// Перегрузка операторов сравнения
#include <iostream>

class Dollars
{
private:
    int m_dollars;

public:
    Dollars(int dollars) : m_dollars(dollars) {}
    //Dollars(int dollars) { m_dollars = dollars; }

    friend bool operator> (const Dollars &d1, const Dollars &d2);
    
};

bool operator> (const Dollars &d1, const Dollars &d2)
{
    return d1.m_dollars > d2.m_dollars;
}


int main()
{
    int d1, d2;
    std::cout << "Enter dollars1: ";
    std::cin >> d1;
    std::cout << "Enter dollars2: ";
    std::cin >> d2;
    Dollars dollars1(d1);
    Dollars dollars2(d2);

    if (dollars1 > dollars2)
        std::cout << "dollars1 are greater than dollars2.\n";
    else std::cout << "dollars1 are not greater than dollars2.\n";

    return 0;
}