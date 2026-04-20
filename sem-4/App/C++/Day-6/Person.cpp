#include <iostream>
#include <string>
using namespace std;

// Base classG
class Person {
protected:
  string name;
  int age;

public:
  Person() { cout << "Person default constructor called\n"; }
  Person(string n, int a) : name(n), age(a) {
    cout << "Person parameterized constructor\n";
  }
  void displayPerson() { cout << "Name: " << name << ", Age: " << age << endl; }

  void introduce() { cout << "Hi, I am a person.\n"; }
};

// Derived Class (single Inheritance)
class Student : public Person {
private:
  int roll;
  float marks;

public:
  Student() { cout << "Student default constructor\n"; }
  Student(string n, int a, int r, float m) : Person(n, a), roll(r), marks(m) {
    cout << "Student parameterized constructor\n";
  }
  void introduce() { cout << "Hi, I am a Student.\n"; }
  void display() {
    displayPerson();
    cout << "Roll : " << roll << endl;
    cout << "Marks :" << marks << endl;
  }
};

int main() {
  cout << "--- Single Inheritance Demo ---\n\n";

  Person p1("Rahul", 25);
  p1.displayPerson();
  p1.introduce();
  cout << "\n--- Student Object ---\n";
  Student s1("Manish", 20, 210, 88.7);
  s1.display();
  s1.introduce();
  return 0;
}
