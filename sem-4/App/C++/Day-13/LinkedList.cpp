#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int>lst = {10,20,30,40};
    lst.push_back(50);
    lst.push_front(5);

    // Insert in middle
    auto it = lst.begin();
    advance(it,2);

    lst.insert(it,999);

    cout << "List elelmets: ";

    for(int x : lst)
    {
        cout <<x << " ";
    }
    cout << endl;

    lst.pop_front();
    lst.pop_back();
    lst.remove(30);

    return 0;
}