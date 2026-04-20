#include <iostream>
using namespace std;

class Rectangle {
public:
  int length;
  int breadth;
  Rectangle() {
    length = 0;
    breadth = 0;
  }
  Rectangle(int length, int breadth) {
    this->breadth = breadth;
    this->length = length;
  }
  Rectangle(const Rectangle &s) {
    this->breadth = s.breadth;
    this->length = s.length;
  }
  ~Rectangle() { cout << "The Rectangle Object is destroyed" << endl; }
  void display() {
    cout << "The length is: " << length << endl;
    cout << "The breadth is: " << breadth << endl;
  }
};

int main() {
  Rectangle r1; // Default constructor
  r1.display();
  // Rectangle r2 = r1; // Copy constructor
  // r2.display();
  {
    Rectangle r3;
    r3.display();
  }
}
