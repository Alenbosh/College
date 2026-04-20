#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string name;
  int roll;
  float marks;

public:
  // Mutator (Setter) functions
  void setName(string n) { name = n; }
  void setRoll(int r) {
    if (r > 0)
      roll = r;
  }
  void setMarks(float m) {
    if (m >= 0 && m <= 100)
      marks = m;
  }
  string getName() { return name; }
  int getRoll() { return roll; }
  float getMarks() { return marks; }
  void display() {
    cout << "\n--- Student Details ---" << endl;
    cout << "Name  : " << name << endl;
    cout << "Roll  : " << roll << endl;
    cout << "Marks : " << marks << endl;
  }
};

int main() {
  Student s1;
  string n;
  int r;
  float m;
  cout << "Enter Student Name: ";
  getline(cin, n);
  s1.setName(n);

  cout << "Enter Marks: ";
  cin >> m;
  s1.setMarks(m);

  cout << "Enter Roll Number: ";
  cin >> r;
  s1.setRoll(r);

  s1.display();

  cout << "\nUsing Getter - Name: " << s1.getName() << endl;

  return 0;
}
