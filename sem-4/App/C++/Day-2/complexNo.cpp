#include <iostream>
using namespace std;

class complexNo {
public:
  int real;
  int imaginary;
  complexNo() {
    real = 0;
    imaginary = 0;
  }
  complexNo(int real, int imaginary) {
    this->real = real;
    this->imaginary = imaginary;
  }
  void display() {
    cout << "The Number is:" << real;
    if (imaginary < 0) {
      cout << "-" << imaginary << "i" << endl;
    } else {
      cout << "+" << imaginary << "i" << endl;
    }
  }
};

int main() {
  complexNo c1;
  c1.real = 5;
  c1.imaginary = 6;
  complexNo c2(4, 5);
  c1.display();
  return 0;
}
