#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;

//Pointer are special variables used to store address of other variables
int main(){
  int a =89;
  int* ptr = &a;
  cout << &ptr << endl;  // Pointer  address
  cout << ptr << endl; // Pointer (inside) will have address of the variable that it points to
  int** par = &ptr;


  // Pointer to pointer
  cout << *(par) << endl;
  cout << **(par) << endl; // Double dereferencing
  cout << *(&a) <<endl; // Derefercing : We get the value stored at the address
  // NULL POINTER
  int** p = NULL;
  cout << p << endl;
  cout << *(p) << endl; // Segmentation error: No  memory loactaion was allocated to pointer for storing value of variable
  return 0;
}
