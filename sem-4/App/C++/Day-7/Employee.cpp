#include <iostream>
using namespace std;

class Employee {
protected:
  string name;
  int empId;
  double salary;

public:
  Employee(string n, int e, double s) : salary(s), name(n), empId(e) {}
  virtual double calculateSalary() = 0;
  virtual void display() {
    cout << "The salary of " << name << " is: " << salary << endl;
  }
  virtual ~Employee() {}
};

class FullTimemployee : public Employee {
private:
  double bonus;

public:
  FullTimemployee(string n, int e, double s, double b)
      : Employee(n, e, s), bonus(b) {}
  double calculateSalary() override { return salary + bonus; }
  void display() override {
    cout << "The salary of " << name << " is: " << salary << endl;
  }
};

class PartTimeEmployee : public Employee {
private:
  double bonus;

public:
  PartTimeEmployee(string n, int e, double s, double b)
      : Employee(n, e, s), bonus(b) {}
  double calculateSalary() override { return salary + bonus; }
  void display() override {
    cout << "The salary of " << name << " is: " << salary << endl;
  }
};

int main() {
  Employee *employee[2];
  employee[0] = new FullTimemployee("Kashish", 7801, 34000.89, 4000);
  employee[1] = new PartTimeEmployee("Max", 7802, 56000.98, 5000);
  double Totalsalary = 0;
  for (int i = 0; i < 2; i++) {
    Totalsalary += employee[i]->calculateSalary();
  }
  for (int j = 0; j < 2; j++) {
    employee[j]->display();
  }
  for (int p = 0; p < 2; p++) {
    delete employee[p];
  }
}
