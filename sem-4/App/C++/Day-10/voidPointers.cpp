#include <iostream>
using namespace std;

int main() {
  int x = 10;
  float y = 5.5;
  char ch = 'A';

  void *ptr;
  ptr = &x;
  cout << "Int value : " << *(int *)ptr << endl;

  ptr = &y;
  cout << "Float value : " << *(float *)ptr << endl;

  ptr = &ch;
  cout << "Char  value : " << *(char *)ptr << endl;

  return 0;
}
