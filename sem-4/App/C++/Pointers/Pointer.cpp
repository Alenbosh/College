#include <iostream>
using namespace std;

void ayu(int *a) { *(a) = 20; } //Pass by reference using pointer

void ref(int &b){ // & is Alias here
  b=2; // pass by referneces using Alias
}

int main() {
  int a = 19;
  ayu(&a);
  ref(a);
  cout << a << endl;
}
