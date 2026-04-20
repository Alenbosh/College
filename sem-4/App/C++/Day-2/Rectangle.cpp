#include <iostream>
using namespace std;

class Rectangle {
public:
  int length;
  int breadth;
  Rectangle(int length, int breadth) {
    this->breadth = breadth;
    this->length = length;
  }
  int calculateArea() { return length * breadth; }
  int calculatePerimeter() { return length + breadth; }
};

int main() {
  Rectangle r1(2, 6);
  int Area = r1.calculateArea();
  int Perimeter = r1.calculatePerimeter();
  cout << "The Area and Perimeter is: " << Area << " & " << Perimeter << endl;
}
