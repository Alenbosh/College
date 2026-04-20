#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int length, int breadth){
        this->breadth=breadth;
        this->length=length;
    }
    int area(){
        return length*breadth;
    }
    void display(){
        cout << "The Area of Rectangle :" << area() << endl;
    }
};

int main(){
    Rectangle *r1 = new Rectangle(5,7);
    Rectangle *r2 = new Rectangle(8,9);
    Rectangle *r3 = new Rectangle(2,4);
    r1->display();
    r2->display();
    r3->display();
    delete r1;
    delete r2;
    delete r3;
}
