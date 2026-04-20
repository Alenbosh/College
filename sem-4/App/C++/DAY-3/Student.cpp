#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string name;
  int roll;
  float marks;

public:
  // Default Constructor
  Student() {
    cout << "Default Constructor called!" << endl;
    name = "Unkwnown";
    roll = 0;
    marks = 0.0;
  }
  // Parameterized Constructor
  Student(string n, int r, float m) {
    cout << "Parameterized Constructor called for " << n << endl;
    name = n;
    roll = r;
    marks = m;
  }

  // Copy Constructor
  Student(const Student &s) {
    cout << "Copy Constructor called for" << name << " (Roll: " << roll << ")"
         << endl;
  }
  void display() {
    cout << "Name : " << name << endl;
    cout << "roll : " << roll << endl;
    cout << "marks :" << marks << endl << endl;
  }
};

int main() {
  cout << "-- Creating objects ---\n";

  Student s1; // Default Constructor
  s1.display();

  Student s2("Manish", 101, 87.5); // Parameterized Constructor
  s2.display();

  Student s3 = s2;
  s3.display();

  // Creating object in a block to see destructor timinig
  {
    Student s4("Rahul", 102, 92.0);
    s4.display();
  } // s4 goes out of scope here -> destructor called

  cout << "End of main()\n";
  return 0;
  // s1,s2,s3 will be destroyed here
}
