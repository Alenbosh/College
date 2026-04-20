#include <complex>
#include <iostream>
#include <ostream>
using namespace std;
class complexNum {
private:
  double real;
  double imag;

public:
  complexNum() : real(0), imag(0) {}
  complexNum(double r, double i) : real(r), imag(i) {}
  complexNum operator-(const complexNum &other) { complexNum temp }
};
