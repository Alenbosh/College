#include <cstring>
#include <iostream>
using namespace std;

class Concatenate {
public:
  char *str1;
  char *str2;
  Concatenate(char *str2, char *str1) {
    this->str1 = str1;
    this->str2 = str2;
  }
  char *Merge() {
    int len = strlen(str1) + strlen(str2) + 1;
    char *result = new char[len];
    strcpy(result, str2);
    strcat(result, str1);
    return result;
  }
};

int main() {
  char a[] = "Hello ";
  char b[] = "world!";

  Concatenate obj(a, b);
  cout << obj.Merge();
}
