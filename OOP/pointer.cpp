#include <iostream>
using namespace std;
int main(){

    int a = 10;

    int* ptr_a = &a; 

    // &a -> reference

    cout << a << " : variable value"<< endl; 
    cout << &a << " : variable address" << endl; 
    
    cout << &ptr_a << " : pointer address" << endl; 
    cout << ptr_a << " : pointer to variable address" << endl; 
    cout << *ptr_a << " : pointer dereference (value of a)" << endl; 


    return 0;
}