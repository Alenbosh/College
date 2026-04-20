#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
  string name;
  int age;

public:
  Person() { cout << "Default Constructor called"; }
  Person(string n, int a) : name(n), age(a) {}
  void displayPerson() {
    cout << "Name :" << name << endl;
    cout << "age :" << age << endl;
  }
  void introduce() { cout << "Hi! I'm a Human" << endl; }
};

class Employee : public Person {
private:
  string department;
  float salary;

public:
  Employee(string n, int a, string d, float s)
      : Person(n, a), department(d), salary(s) {}
  void display() {
    displayPerson();
    cout << "department :" << department << endl;
    cout << "salary :" << salary << endl;
  }
  void introduce() { cout << "Hi! I work at a school" << endl; }
};

int main() {
  Person p1("Abhi", 18);
  p1.displayPerson();
  p1.introduce();
  Employee e2("Alen", 41, "ECE", 9800.00);
  e2.display();
  e2.displayPerson();
}
