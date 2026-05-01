#include <iostream>
#include <string>
using namespace std;

int main() {
  string val;
  cout << "Enter string: ";
  getline(cin, val);

  if (val.empty())
    return 0;

  char *start = &val[0];                // pointer to first char
  char *end = &val[0] + val.size() - 1; // pointer to last char

  while (start < end) {
    char temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }

  cout << "Reversed: " << val << endl;
}

// My version of reversing a character.

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//   string val;
//   cout << "Enter Char to be reversed : ";
//   getline(cin,val);
//   char name[] = "Manish";
//   char *p = name;
// //When moving pointer forward → stop at '\0'
// //When moving pointer backward → stop at start address
//   cout << "\nString using Pointer: ";
//   while (*p != '\0') {
//     p++;
//   }
//   p--;
//   //*p → a char value (like 'h', 'a', etc.)
// //name → a pointer (address) (char*)
//   while (p>=name) {
//     cout << *p;
//     p--;
//   }
//   cout << endl;
// }
