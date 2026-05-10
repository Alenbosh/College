#include <iostream>
using namespace std;

void printValue(void *ptr, char type) {
  switch (type) {
  case 'i':
    cout << *(int *)ptr << endl;
    break;
  case 'f':
    cout << *(float *)ptr << endl;
    break;
  case 'c':
    cout << *(char *)ptr << endl;
    break;
  default:
    cout << "Inavlid type" << endl;
  }
}

int main() {
  int a = 25;
  float b = 7.8f;
  char c = 'z';

  printValue(&a, 'i');
  printValue(&b, 'f');
  printValue(&c, 'c');
  return 0;
}
