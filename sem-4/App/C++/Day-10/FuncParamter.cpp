#include <iostream>
using namespace std;

void Calculator(int a, int b, int (*func)(int, int)) {
  cout << "Result = " << func(a, b) << endl;
}

int add(int a, int b) { return a + b; }

int substract(int a, int b) { return a - b; }

int multiply(int a, int b) { return a * b; }

int main() {
  Calculator(20, 8, add);
  Calculator(20, 8, substract);
  Calculator(20, 8, multiply);
  return 0;
}
