#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Student {
public:
  string name;
  int roll;
  float marks;

  void display() { cout << "Name: " << name << endl; }
};

bool compareMarks(Student a, Student b) { return a.marks > b.marks; }

int main() {
  // vector of objects
  vector<Student> batch;
  // creating students
  Student s1, s2, s3, s4, s5;

  s1.name = "Manish";
  s1.roll = 101;
  s1.marks = 85.5;

  s2.name = "Rahul";
  s2.roll = 102;
  s2.marks = 92.3;

  s3.name = "Aman";
  s3.roll = 103;
  s3.marks = 76.8;

  s4.name = "Priya";
  s4.roll = 104;
  s4.marks = 88.1;

  s5.name = "Neha";
  s5.roll = 105;
  s5.marks = 95.4;

  // Adding objects to vector
  batch.push_back(s1);
  batch.push_back(s2);
  batch.push_back(s3);
  batch.push_back(s4);
  batch.push_back(s5);

  cout << "All Students:\n\n";

  for (Student s : batch) {
    s.display();
  }
  cout << "\n";

  sort(batch.begin(), batch.end(), compareMarks);

  cout << "After Sorting by marks:\n\n";

  for (Student s : batch) {
    s.display();
  }

  cout << "\n";
  unordered_map<int, string> studentMap;

  studentMap[101] = "Manish";
  studentMap[102] = "Rahul";
  studentMap[103] = "Aman";
  studentMap[104] = "Priya";
  studentMap[105] = "Neha";

  int rollToFind;
  cout << "Enter Roll no. to be searched for: ";
  cin >> rollToFind;

  if (studentMap.find(rollToFind) != studentMap.end()) {
    cout << "Student found: " << studentMap[rollToFind] << endl;
  } else {
    cout << "Student not found\n";
  }
  return 0;
}
