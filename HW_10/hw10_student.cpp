#include <iostream>
using namespace std;

class Student
{
  public:
  char Name[50];
  char Initials[5];
  int Group;
  int Marks[5];
};

void printStudent(Student &student)
{
  cout << endl;
  cout << "Student's info: " << student.Name << " " << student.Initials << " " << student.Group << endl;
  cout << "Student's grades:" << endl;

  for (int i = 0; i < 5; i++){
    cout << student.Marks[i] << endl;
  }
}

int main()
{
  Student student;
  
  cout << "Enter student's name: ";
  cin.getline(student.Name, 50);
  
  cout << "Enter student's initials: ";
  cin.getline(student.Initials, 5);

  cout << "Enter student's group: ";
  cin >> student.Group;

  cout << "Enter student's marks: ";
  for (int i = 0; i < 5; i++){
    cin >> student.Marks[i];
  }

  printStudent(student);
  
  return 0;
}