#include <iostream>
#include <ostream>
using namespace std;

class Complex {
private:
  double real;
  double imag;

public:
  Complex() : real(0), imag(0) {}
  Complex(double r, double i) : real(r), imag(i) {}
  Complex operator+(const Complex &other) {
    Complex temp;
    temp.real = real + other.real;
    temp.imag = imag + other.imag;
    return temp;
  }
  friend ostream &operator<<(ostream &out, const Complex &c) {
    out << c.real;
    if (c.imag >= 0)
      out << " + " << c.imag << "i";
    else
      out << " - " << -c.imag << "i";
    return out;
  }
};

int main() {
  Complex c1(3.5, 2.5);
  Complex c2(1.5, 4.0);
  Complex c3 = c1 + c2;
  cout << "c1 = " << c1 << endl;
  cout << "c2 = " << c2 << endl;
  cout << "c1 + c2 = " << c3 << endl;
  return 0;
}
