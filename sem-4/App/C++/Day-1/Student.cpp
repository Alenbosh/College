#include <iostream>
#include <string>
using namespace std;

class Student {
public:
  // Data members (variables)
  string name;
  int roll;
  float marks;

  // Member function (method)
  void display() {
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Marks: " << marks << endl;
  }
};

int main() {
  Student s1;

  s1.name = "Anish";
  s1.roll = 54;
  s1.marks = 67.8;
  s1.display();
  return 0;
}
