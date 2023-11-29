// Умный указатель std::unique_ptr и динамические массивы

// make_unique(). Это шаблон функции, который создает объект типа шаблона и инициализирует его аргументами, переданными в функцию.

#include <iostream>
#include <memory> // для std::unique_ptr и std::make_unique

class Fraction
{
private:
  int m_numerator = 0;
  int m_denominator = 1;

public:
  Fraction(int numerator = 0, int denominator = 1) :
    m_numerator(numerator), m_denominator(denominator)
  {
  }

  void set_numerator(int numerator)
  {
    m_numerator = numerator;
  }
  void set_denominator(int denominator)
  {
    m_denominator = denominator;
  }

  int get_numerator() const { return m_numerator; }
  int get_denominator() const { return m_denominator; }

  friend std::ostream& operator<<(std::ostream& out, const Fraction &f1)
  {
    out << f1.m_numerator << "/" << f1.m_denominator;
    return out;
  }

};


int main()
{
  // Создаем объект с динамически выделенным Fraction с numerator = 7 и denominator = 9
  std::unique_ptr<Fraction> f1 = std::make_unique<Fraction>(7, 9);
  std::cout << *f1 << '\n';

  // Создаем объект с динамически выделенным массивом Fraction длиной 5.
  // Используем автоматическое определение типа данных с помощью ключевого слова auto
  auto f2 = std::make_unique<Fraction[]>(5);
  f2[0].set_numerator(7);
  f2[0].set_denominator(9);
  std::cout << f2[0].get_numerator() << "/" << f2[0].get_denominator() << "\n";
  
  f2[4] = Fraction(8, 10);
  std::cout << f2[4] << '\n';
  std::cout << '\n';
  return 0;
}