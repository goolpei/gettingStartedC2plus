#include <iostream>
using namespace std;
int main(){

    cout << "\n----using--'sizeof'--operator---\n" << endl;
    // char, int, float, double, long, long long, long double 
    cout << "Size of char: " << sizeof(char) << " byte\n";
    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Size of float: " << sizeof(float) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of long: " << sizeof(long) << " bytes\n";
    cout << "Size of long long: " << sizeof(long long) << " bytes\n";
    cout << "Size of long double: " << sizeof(long double) << " bytes\n";

    return 0;
}