// 3. **Combined Exercise** (Recommended)
//    - Create a `Student` class (from Unit 1)
//    - Use `unordered_map<int, Student>` to store students (key = roll number)
//    - Use `list<Student>` to maintain an ordered waiting list
//    - Implement functions to add, search (by map), and display.

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    float marks;
    void display(){
        cout << "Name: " << name <<endl;
        cout << "marks: " << marks <<endl;
    }
};

int main(){
    unordered_map<int, Student> mk;
    mk[100]={"Mansi",45.6};
    mk[101]={"Fujimoto",56.6};
    mk[102]={"Hikashi",78.6};
    mk[103]={"Nitu",98.6};
    
}