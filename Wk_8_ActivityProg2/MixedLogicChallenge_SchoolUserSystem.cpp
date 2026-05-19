#include <iostream>
#include <string>
using namespace std;

class SchoolUser{
public:
    string name;
    string role;
    void displayBasicInfo(){
        cout << "Name: " << name << endl;
        cout << "Role: " << role << endl;
    }
};
class Teacher: public SchoolUser{
public:
    string subject;
    void displaySubject(){
        cout << "Subject: " << subject << endl;
    }
};
class Student: public SchoolUser{
public:
    int yearLevel;
    void displayYearLevel(){
        cout << "Year Level: " << yearLevel << endl;
    }
};

int main(){
    Teacher t1; Student s1; 
    t1.name = "Mr. Luffy"; 
    t1.role = "Teacher"; 
    t1.subject = "Adventure";
    s1.name = "Matthew Venice Balaod"; 
    s1.role = "Student"; 
    s1.yearLevel = 1;
    t1.displayBasicInfo(); t1.displaySubject(); 
    cout << endl;
    s1.displayBasicInfo(); s1.displayYearLevel();
    return 0;
}