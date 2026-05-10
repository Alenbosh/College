#include <iostream>
using namespace std;

int main() {
  int a = 5;
  int *p = &a;
  int **q = &p;
  // TEST 1 :
  // cout << *p << endl;
  // cout << **q << endl;
  // cout << p << endl;
  // cout << *q << endl;

  int arr[] = {10,20,30,40};
  int* ptr = arr;
  cout << *(ptr + 1) << endl;
  cout << *(ptr + 3) << endl;
  ptr ++;
  cout << *ptr << endl;
}
