#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
  float marks;
  string name;

  float compareMarks(Student s1, Student s2) { return s1.marks > s2.marks; }
};

int main() {
  int n;
  cout << "Enter  No. of Students: ";
  cin >> n;
  for (int i; i < n; i++) {
    cout << "Enter Student's Name: ";
    getline(cin, name);
    cout << "Enter Student's Marks: ";
    cin >> marks;
  }
}
