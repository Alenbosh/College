#include <iostream>
using namespace std;
int main() {
  int x = 10;
  int *ptr = &x; // ptr stores address of x
  cout << *ptr;  // Dereference -> prints 10
  int a = 100;
  int *p1 = &a;   // single Pointer
  int **p2 = &p1; // Pointer to Pointer
  cout << a << endl;
  cout << *p1 << endl;
  cout << **p2 << endl;
  int arr[5] = {10, 20, 30, 40, 50};
  cout << arr;        // address of arr[0] or array name itself is a constant
                      // Pointer to the first element
  cout << *arr;       // 10
  cout << *(arr + 2); // 30 -> Pointer Arithematic
  const char *str1 = "Hello World";
  char str2[] = "Manish";
  cout << str1 << endl;
  char *pttr = str2;
  while (*pttr != '\0') {
    cout << *pttr << " ";
    pttr++;
  }
}
