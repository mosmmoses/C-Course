#include <iostream>
#include <vector>
#include <algorithm> //This headers file ("vector" and "algorithm") provides 
//a collection of functions especially designed 
//to be used with ranges of elements. 
//It contains functions for searching, sorting, and 
//manipulating elements in sequences, such as arrays and vectors. 

// Creating base class for real estate
class RealEstate {
public:
    RealEstate(int area) : m_area(area) {}

    virtual int getArea() { return m_area; }
    virtual void setArea(int area) { m_area = area; }

//In C++, the "virtual" keyword is used in the context 
//of class inheritance and polymorphism. 
//When a base class function is declared as virtual, 
//it allows a derived class to override that function. 
//This means that when a derived class object is used 
//in place of a base class object, the overridden function
//in the derived class is called instead of the base class 
//function with the same name. 

private:
    int m_area;
};

// Creating derived class for building type "townhouse"
class Townhouse : public RealEstate {

public:
    Townhouse(int area, bool backyard) : RealEstate(area), m_hasBackyard(backyard) {}
    bool hasBackyard() { return m_hasBackyard; }
    
private:
    bool m_hasBackyard;
};

class Flat : public RealEstate {

public:
    Flat(int area, int floor) : RealEstate(area), m_floor(floor) {}
    int getFloor() { return m_floor; }
    
private:
    int m_floor;
};

int main()
{
    Townhouse t1(150, true);
    
    Flat a1(100, 5);
    Flat a2(120, 10);
    
    std::vector<RealEstate*> properties = {&t1, &a1, &a2};

    // Printing information of each property

    for (auto property : properties) {
        //std::cout << "Apartment area: " << property -> getArea() << std::endl;
        if (Townhouse* townhouse = dynamic_cast<Townhouse*>(property)) {
            std::cout << "Apartment type: Townhouse" << std::endl;
            std::cout << "Has backyard: " << townhouse -> hasBackyard() << std::endl;
            std::cout << "Townhouse area: " << townhouse -> getArea()<< " sq.m." << std::endl;
            std::cout << std::endl;
        }
        if (Flat* flat = dynamic_cast<Flat*>(property)){
            std::cout << "Apartment type: Flat" << std::endl;
            std::cout << "Floor: " << flat -> getFloor() << std::endl;
            std::cout << "Flat area: " << flat -> getArea()<< " sq.m." << std::endl;
            std::cout << std::endl;
        }
            
    }
    
    int maxArea = 0;
    
    for (auto property : properties) 
    {
      maxArea = std::max(maxArea, property->getArea());
    }

    std::cout << "The maximum living area is: " << maxArea << " sq.m." << std::endl;
    
    return 0;
}