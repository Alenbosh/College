// 2. **std::list Tasks**
//    - Create a `list<string>` of names
//    - Perform: push_front, push_back, insert in middle, remove a name
//    - Sort the list
//    - Reverse the list

#include <iostream>
#include<list>
#include <algorithm>
using namespace std;

int main(){
    list<string>lst = {"Aastha", "anu","anisha"};
    lst.push_back("amu");
    lst.push_front("abhilasha");

    // Finding middle of the element
    auto it = lst.begin();
    advance(it,lst.size()/2);
    lst.insert(it,"anushka");

    cout << "Displaying current elements\n";

    for(auto itr = lst.begin(); itr != lst.end(); itr++){
        cout << *itr << " ";
    }
    cout << "\n";
    

    string a;
    cout << "Enter Name to be deleted: ";
    cin >> a;

    lst.remove(a);

    cout << "Displaying elements after deletion\n";

    for(auto itr=lst.begin(); itr != lst.end(); itr++){
        cout << *itr <<" ";
    }


    lst.sort();

    for(auto itr=lst.begin(); itr !=lst.end(); itr++){
        cout << *itr << " ";
    }


    lst.reverse();

    //Printing reversed list
    cout << "Reversed List: ";
    for(string lsts:lst){
        cout << lsts << " ";
    }

return 0;
}