#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
  int add(int a, int b) { return a + b; }
  double add(double a, double b) { return a + b; }
  string add(string a, string b) { return a + b; }
};

int main() {
  Calculator c;
  cout << "Int add: " << c.add(5, 3) << endl;
  cout << "Doubnle add: " << c.add(5.5, 2.3) << endl;
  cout << "String add: " << c.add("Hello", "World") << endl;
  return 0;
}
