#include <iostream>
using namespace std;

int main() {
  int f, s, t;
  cout << "Enter 1st Number :" << endl;
  cin >> f;
  cout << "Enter 1st Number :" << endl;
  cin >> s;
  cout << "Enter 1st Number :" << endl;
  cin >> t;
  if (s > t && s > f) {
    cout << "The greatest No. is : " << s << endl;
  } else if (f > s && f > t) {
    cout << "The greatest No. is : " << f << endl;
  } else {
    cout << "The greatest No. is : " << t << endl;
  }
};
