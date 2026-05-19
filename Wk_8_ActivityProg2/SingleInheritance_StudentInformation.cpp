#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string NAME;
    void displayName(){
        cout << "Name: " << NAME << endl;
    }
};

class Student: public Person{
public:
    int studentID;
    void displayStudentID(){
        cout << "Student ID: " << studentID << endl;
    }
}; 

int main(){
    Student s1;
    s1.NAME = "Matthew Venice Balaod";
    s1.studentID = 12345;
    s1.displayName(); s1.displayStudentID();
    return 0;
}