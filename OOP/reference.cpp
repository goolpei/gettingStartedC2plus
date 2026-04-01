#include <iostream>
using namespace std;
int main(){

    // Unlike a pointer, which is a separate variable that stores an 
    // address, a reference is the object, just with a different name 
    // inside that specific function.

    int a = 10;

    int &b = a; 

    cout << &a << " : address of a" << endl; 
    cout << &b <<  " : still address of a" << endl; 
    cout << b <<  " : value of a" <<  endl; 

    return 0;
}