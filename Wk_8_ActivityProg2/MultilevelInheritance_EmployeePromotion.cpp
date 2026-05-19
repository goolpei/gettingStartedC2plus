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
class Employee: public Person{
public:
    int employeeID;
    void displayEmployeeID(){
        cout << "Employee ID: " << employeeID << endl;
    }
};
class Manager: public Employee{
public:
    string department;
    void displayDepartment(){
        cout << "Department: " << department << endl;
    }
};
int main(){
    Manager m1;
    m1.NAME = "Matthew Venice Balaod";
    m1.employeeID = 12345;
    m1.department = "Data Analytics Department";
    m1.displayName(); m1.displayEmployeeID(); m1.displayDepartment();
    return 0;
}