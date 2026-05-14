#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

void toUpper(char *str) {
  while (*str) {
    *str = toupper(*str);
    str++;
  }
}

void toLower(char *str) {
  while (*str) {
    *str = tolower(*str);
    str++;
  }
}

int main() {
  char str[100];
  cout << "Enter a string : ";
  cin.getline(str, 100);

  void (*func)(char *);

  func = toUpper;
  func(str);
  cout << "Uppercase: " << str << endl;

  func = toLower;
  func(str);
  cout << "Lowercase: " << str << endl;

  return 0;
}
