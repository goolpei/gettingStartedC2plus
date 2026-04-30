#include <iostream>
using namespace std;

class Student{
    public:
    string NAME;
    int GRADE;

    void showStudentDetails(){
        if(GRADE < 0 or GRADE > 100){
            cout << NAME << " has invalid grade." << endl;
        } 
        else if(GRADE < 75){
            cout << NAME << " failed." << endl;
        } 
        else{
            cout << NAME << " passed." << endl;
        }
    }
};

int main(){

    Student s1;

    cout << "Enter student: ";
    string name; cin >> name;
    s1.NAME = name;

    cout << "Enter grade: ";
    int grade; cin >> grade;
    s1.GRADE = grade;

    s1.showStudentDetails();


    return 0;
}