// 3. **Combined Exercise** (Recommended)
//    - Create a `Student` class (from Unit 1)
//    - Use `unordered_map<int, Student>` to store students (key = roll number)
//    - Use `list<Student>` to maintain an ordered waiting list
//    - Implement functions to add, search (by map), and display.

#include <iostream>
#include <list>
#include <string>
#include <unordered_map>
using namespace std;

class Student {
public:
  string name;
  float marks;
  void display() {
    cout << "Name: " << name << endl;
    cout << "marks: " << marks << endl;
  }
};

void addStudent(unordered_map<int, Student> &mk) {
  int roll;
  Student s;
  cout << "Enter Roll Number: ";
  cin >> roll;

  cout << "Enter name: ";
  cin >> s.name;

  cout << "Enter marks: ";
  cin >> s.marks;

  // Insertion into map
  mk[roll] = s;

  cout << "Stuent Added Successfully\n";
}

void searchStudent(unordered_map<int, Student> &mk) {
  int roll;
  cout << "ENter Roll Number to search: ";
  cin > roll;
  if (mk.count(roll)) {
    cout << "\nStudent Found\n";
    mk[roll].display();
  } else {
    cout << "Student not Found\n";
  }
}

void displayStudents(unordered_map<int, Student> &mk) {
  cout << "\nAll Students\n\n";

  // mks become pair<int, Student>
  for (auto ks : mk) {

    // Key part
    cout << "Roll No: " mks.first << endl;

    // value part
    mks.second.display();
    cout << endl;
  }
}

int main() {
  unordered_map<int, Student> mk;
  mk[100] = {"Mansi", 45.6};
  mk[101] = {"Fujimoto", 56.6};
  mk[102] = {"Hikashi", 78.6};
  mk[103] = {"Nitu", 98.6};

  // Adding waiting List
  int a;
  list<Student> lst;
  string name;
  cout << "Enter No. of students in WL: ";
  cin >> a;
  for (int i = 0; i < a; i++) {
    Student s;
    cout << "Enter Student Name: ";
    cin >> s.name;
    cout << "Enter Student marks: ";
    cin >> s.marks;
    lst.push_back(s);
  }

  addStudent(mk);
  searchStudent(mk);
  displayStudents(mk);

  cout << "\nWaiting List\n\n";

  for (auto s : lst) {
    s.display();
    cout << endl;
  }
  return 0;
}
