#include <iostream>
#include <string>
using namespace std;

class len {
public:
  char *str;
  int length = 0;
  len(char *str) { this->str = str; }
  int stringLength() {
    char *temp = str;
    length = 0;
    while (*temp != '\0') {
      temp++;
      length++;
    }
    return length;
  }
  void display() { cout << "The length of " << str << " is : " << length; }
};

int main() {
  len s1((char *)"Manish");
  s1.stringLength();
  s1.display();
}
