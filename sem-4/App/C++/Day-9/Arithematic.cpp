#include <iostream>
#include <iterator>
using namespace std;

class Arithematic {
public:
  void Alternate(int arr[], int val) {
    for (int i = 0; i < val; i += 2) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
  void maximumElement(int arr[], int val) {
    int max = arr[0];
    for (int i = 0; i < val; i++) {
      if (arr[i] > max) {
        max = arr[i];
      }
    }
    cout << "The Maximum Element in an array is : " << max << endl;
  }
};

int main() {
  int arr[] = {3, 5, 54, 7, 68, 6, 8}; // USE curly brackets in c++
  int val = size(arr);
  Arithematic a1;
  Arithematic a2;
  a1.Alternate(
      arr, val); // we dont need [] square brcakets while declaring an array.
  a2.maximumElement(arr, val);
}
