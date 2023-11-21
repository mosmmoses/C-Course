// Перегрузка оператора присваивания (=)
#include <iostream> 
#include <cassert>

class Drob
{
private:
  int m_numerator;
  int m_denominator;

public:
    // Конструктор по умолчанию
    Drob(int numerator=0, int denominator=1) :
        m_numerator(numerator), m_denominator(denominator)
    {
        assert(denominator != 0);
    }

  // Конструктор копирования
  Drob(const Drob &copy) :
    m_numerator(copy.m_numerator), m_denominator(copy.m_denominator)
  {
    // Нет необходимости выполнять проверку denominator здесь, так как эта проверка уже осуществлена в конструкторе по умолчанию
    std::cout << "Copy constructor worked here!\n"; // просто, чтобы показать, что это работает
  }

  // Перегрузка оператора присваивания
  Drob& operator= (const Drob &drob)
  {
       // Выполняем копирование значений
       m_numerator = drob.m_numerator;
       m_denominator = drob.m_denominator;

       // Возвращаем текущий объект, чтобы иметь возможность связать в цепочку выполнение нескольких операций присваивания
       return *this;
  }

  friend std::ostream& operator<<(std::ostream& out, const Drob &d1);

};

std::ostream& operator<<(std::ostream& out, const Drob &d1)
{
  out << d1.m_numerator << "/" << d1.m_denominator;
  return out;
}

int main()
{
    Drob sixSeven(6, 7);
    Drob d;
    d = sixSeven; // вызывается перегруженный оператор присваивания
    std::cout << d << "\n";

    return 0;
}