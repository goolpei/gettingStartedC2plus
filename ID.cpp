#include <iostream>

using namespace std;
int main(){
    string name, school, course;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter school: ";
    getline(cin, school);
    cout << "Enter course: ";
    getline(cin, course);

    cout << "-----I.D-----" << endl;
    cout << "Name: " << name << endl;
    cout << "School: " << school << endl;
    cout << "Course: " << course << endl;
    return 0;
}