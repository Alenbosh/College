#include <iostream>
#include <string>
using namespace std;

class Student {
public:
  string name;
  int rollNo;
  float marks;
  void inpu() {
    cout << "Enter name of the student : ";
    getline(cin, name);
    cout << "Enter Roll no. of the student : ";
    cin >> rollNo;
    cout << "Enter marks of the student : ";
    cin >> marks;
    cin.ignore();
  }
  void display() {
    cout << "------------XYZ University --------------" << endl;
    cout << "Name of the Student : " << name << endl;
    cout << "Roll No. of the student : " << rollNo << endl;
    cout << "Marks scored : " << marks << endl;
  }
};
int main() {
  int n;
  cout << "Enter the no. of the Student :";
  cin >> n;
  cin.ignore();
  Student *ptr = new Student[n];
  for (int i = 0; i < n; i++) {
    cout << "\nStudent " << i + 1 << endl;
    (*(ptr + i)).inpu();
  }
  for (int i = 0; i < n; i++) {
    cout << "\nStudent " << i + 1 << endl;
    (*(ptr + i)).display();
  }
  delete[] ptr;
  return 0;
}
