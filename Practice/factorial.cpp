#include <iostream>
using namespace std;
int main(){

    int factorial = 1;
    int num;

    cout << "Enter number: ";
    cin >> num;

    for(int i = 1; i <= num; i++) factorial = factorial * i;

    cout << num << '!' << " = " << factorial << endl; 
    return 0;
}