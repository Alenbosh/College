#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;
  int a, n;
  cout << "Enter no. of elements: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Enter " << i + 1 << " element: ";
    cin >> a;
    v.push_back(a);
  }
  int sum = 0;
  for (int x : v) {
    sum += x;
  }
  int average = sum / n;
  cout << "The Avergae of elements present in vector : " << average << endl;
  cout << "The sum of elements present in vector : " << sum << endl;
  sort(v.begin(), v.end());
  auto it = unique(v.begin(), v.end());
  v.erase(it, v.end());
  for (int x : v)
    cout << x << " ";
}
