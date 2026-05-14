#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;
  v.push_back(50);
  v.push_back(20);
  v.push_back(40);
  v.push_back(10);

  cout << "vector size: " << v.size() << endl;
  cout << "First element: " << v[0] << " or " << v.front() << endl;
  cout << "Last element: " << v.back() << endl;

  // insertion at specific postion
  v.insert(v.begin() + 2, 999);

  cout << "nElements: ";
  for (int x : v) {
    cout << x << " ";
  }
  cout << endl;

  cout << "Using Iterator: ";
  for (auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  sort(v.begin(), v.end());

  cout << "After sorting: ";
  for (int x : v) {
    cout << x << " ";
  }
  return 0;
}
