#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string name;
  int roll;
  float marks;

public:
  Student() {
    cout << "Default Constructor called \n";
    name = "Unkwown";
    roll = 0;
    marks = 0.0;
  }

  Student(string n, int r, float m) { // Parameterized Constructor
    name = n;
    roll = r;
    marks = m;
  }
  ~Student() {
    cout << "Destructor called for " << name << " (Roll: " << roll << ")\n";
  }
  void display() {
    cout << "Name : " << name << " | Roll: " << roll << " | Marks: " << marks
         << endl;
  }
  void setMarks(float m) { marks = m; } // Mutator functions
};

int main() {
  cout << "--- Dynamic Objects Demo ---\n\n";

  Student *s1 =
      new Student("Manish", 101, 87.5); // Creating object with initialization
                                        // done via Parameterized Constructor
  s1->display();
  int n = 3;
  Student *batch = new Student[n];

  batch[0].setMarks(90);
  batch[1].setMarks(85);
  batch[2].setMarks(95);

  cout << "\n--- Batch of students ---\n";
  for (int i = 0; i < n; i++) {
    cout << "Student " << i + 1 << ": ";
    batch[i].display();
  }

  Student *students[2];
  students[0] = new Student("Rahul", 102, 92.0);
  students[1] = new Student("Priya", 103, 88.5);

  cout << "\n--- Array of Pointers ---\n";
  for (int i = 0; i < 2; i++) {
    students[i]->display();
  }

  delete s1;
  delete[] batch;

  for (int i = 0; i < 2; i++) {
    delete students[i];
  }

  cout << "\n All dynamic memory freed. End of program.\n";
  return 0;
}
