#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


int main(){
    unordered_map<string,int> mp;
    mp["Manish"] = 101;
    mp["Rahul"] = 102;
    mp["Priya"] = 103;
    
    //Insert using pair
    mp.insert({"Aman",104});

    //search
    if(mp.count("Manish")){
        cout << "Roll no of Manish: " << mp["manish"] <<endl;
    }
    //Print all
    cout << "\nAll Students:\n";
    for(auto& pair : mp){
        cout << pair.first << " -> " << pair.second << endl;
     }
     return 0;
}