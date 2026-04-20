#include <iostream>
using namespace std;

class Shape {
public:
  virtual double area() = 0;
  void display() { cout << area() << endl; }
  virtual ~Shape() {}
};

class Rectangle : public Shape {
  int length;
  int breadth;

public:
  Rectangle(int l, int b) : length(l), breadth(b) {}
  double area() override { return length * breadth; }
};

class Triangle : public Shape {
  int base;
  int height;

public:
  Triangle(int b, int h) : base(b), height(h) {}
  double area() override { return 0.5 * base * height; }
};

class Circle : public Shape {
  int radius;

public:
  Circle(int r) : radius(r) {}
  double area() override { return 3.14 * radius * radius; }
};

int main() {
  Shape *r1 = new Rectangle(12, 25);
  r1->display();
  Shape *t1 = new Triangle(12, 10);
  t1->display();
  Shape *c1 = new Circle(7);
  c1->display();
  delete r1;
  delete t1;
  delete c1;
}
