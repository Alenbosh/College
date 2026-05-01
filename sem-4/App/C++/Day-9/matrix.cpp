#include <cstring>
#include <iostream>
using namespace std;

int main() {
  cout << "--- Pointers Revision - Day 9 ---\n\n";

  // 1. Pointer to Pointer
  int value = 500;
  int *ptr1 = &value;
  int **ptr2 = &ptr1;

  cout << "Value    :" << value << endl;
  cout << "*ptr1    :" << *ptr1 << endl;
  cout << "**ptr2   :" << **ptr2 << endl << endl;

  int rows = 3, cols = 4;
  int **matrix = new int *[rows]; // Array of pointers

  for (int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
    for (int j = 0; j < cols; j++) {
      matrix[i][j] = (i + 1) * (j + 1);
    }
  }
  cout << "Dynamic 2D Matrix:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << matrix[i][j] << "\t";
    }
    cout << endl;
  }
  // 3. String using char* + Pointer Arithematic
  char name[] = "Manish Rajak";
  char *p = name;

  cout << "\nString using pointer: ";
  while (*p != '\0') {
    cout << *p;
    p++;
  }
  cout << endl;

  // Clean up 2D Array
  for (int i = 0; i < rows; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;
  return 0;
}
