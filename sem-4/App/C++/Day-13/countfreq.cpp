//    - Count frequency of words in a sentence using `unordered_map<string, int>`


#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<string,int> lines;
    int n,count;
    cout << "Enter No. of lines you wanna enter: ";
    cin >> n;
    string a;
    for (int i=0; i<n; i++){
        cout << "Enter your line/lines: " << endl;
        cin >> a;
        lines.insert({a,i+1});
    }
    for(auto&pair : lines){
        a=pair.first;
        while(a){
            if(a !='\0'){
            count++;
        } else{
            break;
        }
        }
        
    }
    cout << "The frequency of word is: " <<count;
}