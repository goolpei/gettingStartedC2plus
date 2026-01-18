#include <iostream>
using namespace std;
int main(){

    cout << endl << "-------------Bitwise Operators-------------\n" << endl;
    int a = 10;
    int b = 12;
    
    cout << "'&' Bitwise AND" << endl; 
    cout << "a & b = " << (a & b) << endl; // 1010 AND 1100 = 1000 (8)
    cout << "'|' Bitwise OR" << endl; 
    cout << "a | b = " << (a | b) << endl; // 1010 OR 1100 = 1110 (14)
    cout << "'^' Bitwise XOR" << endl;
    cout << "a ^ b = " << (a ^ b) << endl; // 1010 XOR 1100 = 0110 (6)
    cout << "'~' Bitwise NOT" << endl;
    cout << "~a = " << ~(a) << endl; // NOT(1010) = -(x + 1) = -(10 + 1) = (-11)

    cout << "\n'<<' Left shift (a * 2^n)" << endl;
    cout << "a << 1 = " << (a << 1) << endl; // 10 * 2 = 20
    cout << "a << 1 = " << (a << 2) << endl; // 10 * 2 * 2 = 40
    cout << "a << 1 = " << (a << 3) << endl; // 10 * 2 * 2 * 2 = 80

    cout << "\n'<<' Right shift (a / 2^n)" << endl;
    cout << "a >> 1 = " << (a >> 1) << endl; // 10 / 2 = 5
    cout << "a >> 1 = " << (a >> 2) << endl; // 10 / 2 / 2 = 2
    cout << "a >> 1 = " << (a >> 3) << endl; // 10 / 2 / 2 / 2 = 1


    return 0;
}