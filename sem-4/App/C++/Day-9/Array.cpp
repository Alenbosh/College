#include <iostream>
using namespace std;

int main() {
  int rows, cols, el;
  cout << "Enter No. of rows : ";
  cin >> rows;
  cout << "Enter no. of Columns : ";
  cin >> cols;
  int **matrix = new int *[rows]; // Array of pointers
  for (int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
    for (int j = 0; j < cols; j++) {
      cout << "Enter Row " << i + 1 << " Column " << j + 1 << " Element : ";
      cin >> el;
      matrix[i][j] = el;
    }
  }
  cout << "Dynamic 2D Matrix:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << matrix[i][j] << "\t";
    }
    cout << endl;
  }
}
