#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string name;
  int roll;
  float marks;

public:
  Student(string n, int r, float m) : name(n), roll(r), marks(m) {}
  void display() {
    cout << "------------------------------------" << endl;
    cout << "Name of the student : " << name << endl;
    cout << "Roll No. of the student : " << roll << endl;
    cout << "Marks of the student : " << marks << endl;
  }
};

int main() {
  string name;
  int roll;
  float marks;
  cout << "Enter Student's name : " << endl;
  getline(cin, name);
  cout << "Enter Student's Roll No. " << endl;
  cin >> roll;
  cout << "Enter Student marks : " << endl;
  cin >> marks;
  Student s1(name, roll, marks);
  s1.display();
}
