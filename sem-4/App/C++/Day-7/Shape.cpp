#include <iostream>
using namespace std;

// Abstract base Class
class Shape {
protected:
  string shapeName;

public:
  Shape(string name) : shapeName(name) {}

  // Virtual Function
  virtual double area() {
    cout << "Shape area() called (should not happen)\n";
    return 0.0;
  }

  // Pure Virtual Function -> makes class Abstract
  virtual double perimeter() = 0;

  // Non-Virtual Function
  void displayType() { cout << "This is a " << shapeName << endl; }

  virtual ~Shape() { cout << shapeName << "destroyed\n"; }
};

class Circle : public Shape {
private:
  double radius;

public:
  Circle(double r) : Shape("Circle"), radius(r) {}
  double area() override { return 3.146 * radius * radius; }
  double perimeter() override { return 3.146 * 2 * radius; }
};

class Rectangle : public Shape {
private:
  double length, breadth;

public:
  Rectangle(double l, double b) : Shape("Rectangle"), length(l), breadth(b) {}

  double area() override { return length * breadth; }
  double perimeter() override { return 2 * (length + breadth); }
};

int main() {
  cout << "--- Runtime Polymorphism Demo ---\n\n";

  Shape *s1 = new Circle(5.0);
  Shape *s2 = new Rectangle(4.0, 6.0);
  s1->displayType();
  cout << "Area = " << s1->area() << endl;
  cout << "Perimeter = " << s1->perimeter() << endl;
  cout << "\n";
  s2->displayType();
  cout << "Area = " << s2->area() << endl;
  cout << "perimter = " << s2->perimeter() << endl;

  delete s1;
  delete s2;
  return 0;
}
