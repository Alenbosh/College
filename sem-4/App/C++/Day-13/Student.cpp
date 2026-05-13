#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


// 1. **unordered_map Tasks** (Very Important)
//    - Create `unordered_map<int, string>` → Roll No → Student Name
//    - Add 6 students
//    - Search student by roll number




int main(){
    unordered_map<int,string> student;
    student[101]="Ayesha";
    student[102]="Akansha";
    student[103]="Ayushi";
    student[104]="Ahana";
    student[105]="Ayush";

    int a;
    cout << "Enter roll no. to be searched for: ";
    cin >> a;

    if(student.count(a)){
        cout << "Name of the student: " << student[a] << endl;
    }
    return 0;
}