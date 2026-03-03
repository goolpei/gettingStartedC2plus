#include <iostream>
using namespace std;
int main(){

    int addNum(int, int);
    int num1, num2;

    cout << "Enter 2 numbers to add: ";
    cin >> num1 >> num2;

    cout << "Sum: " << addNum(num1, num2);


    return 0;
}

int addNum(int a, int b){
    return a + b;
}