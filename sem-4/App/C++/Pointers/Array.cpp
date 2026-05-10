#include <iostream>
#include <ostream>
using namespace std;

int main() {
  // ARRAY POINTER
  int arr[] = {12, 3, 4, 5, 6, 6};
  cout << arr << endl; // Array pointer : It is also called constant pointer

  // Contiguos memory allocation
  cout << *(arr+1) << endl;
  cout << *(arr+3) << endl;
  cout << *(arr+2) << endl;
  cout << *(arr+4) << endl;


  // IN cpp we cant add two pointers but substraction is possible

  int* tr;
  int* tr2 = tr + 2;
  cout << tr2 - tr << endl;


  // Compare ( < , <= , > , >= , == , != )
  int* io;
  int* io2 = io;
  cout << (io == io2) << endl;


  int a = 15;
  // arr = &a; Once assigned we cant the value of array pointer
  // Baecuse if we are able to reassign at=rray pointer, we will lose the value
  // of array values
  cout << *(arr) << endl;

  // Increment / Decrement pointer
  int ab = 10;
  int *ptr = &ab;

  cout << ptr << endl;
  ptr++; // As each integer takes 4 bytes of space, Here ++ actualy means + 4
  cout << ptr << endl;
  ptr = ptr + 2; // 8 bytes gets added = 2 int
  cout << ptr << endl;

  return 0;
}
