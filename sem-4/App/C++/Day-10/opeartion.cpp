#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int substract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
  int (*operation)(int, int);
  operation = add;
  cout << "The addition is : " << operation(10, 5) << endl;
  operation = substract;
  cout << "The Substraction is : " << operation(10, 5) << endl;
  operation = multiply;
  cout << "The multiplication is : " << operation(10, 5) << endl;
  return 0;
}
