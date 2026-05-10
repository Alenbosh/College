#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int substract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) {
  if (b == 0) {
    cout << "Division by Zero not possible" << endl;
    return 0;
  }
  return a / b;
}

int main() {
  int a;
  int b;
  int (*operations[4])(int, int) = {add, substract, multiply, divide};
  int choice;
  cout << "Enter 1 for Division------- " << endl;
  cout << "Enter 2 for Addition------- " << endl;
  cout << "Enter 3 for Subtraction----- " << endl;
  cout << "Enter 4 for Multipication------ " << endl;
  cout << "Enter your choice : ";
  cin >> choice;
  if (choice > 4 || choice < 1) {
    cout << " Invalid Choice ";
    return 0;
  }
  cout << "Enter first number : ";
  cin >> a;
  cout << "Enter second number : ";
  cin >> b;

  int result = operations[choice - 1](a, b);
  cout << "Result = " << result << endl;
  return 0;
}
