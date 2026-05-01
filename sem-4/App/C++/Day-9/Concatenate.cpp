#include <iostream>
#include <type_traits>
using namespace std;

class Concatenate {
public:
  char *str1;
  char *str2;
  Concatenate(char *str2, char *str1) {
    this->str1 = str1;
    this->str2 = str2;
  }
  void Merge()
};
