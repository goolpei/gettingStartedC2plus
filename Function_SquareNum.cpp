#include <iostream>
using namespace std;
int main(){
    
    //pass by value - original value of variable does not change, only makes a copy of the variable inside the function
    void passByValue_squareNum(int n);

    //pass by reference - original value of variable changes
    void passByReference_squareNum(int &n);

    int i_squareNum(int &m);

    int num = 6; //passByValue
    int num2 = 6; //passByRef
    int num3 = 6;

    cout << "Num1 = " << num << endl;
    passByValue_squareNum(num);
    cout << "Outside passByValue function: " << num << " // Original value doesn't change." << endl;

    cout << "\n";

    cout << "Num2 = " << num2 << endl;
    passByReference_squareNum(num2);
    cout << "Outside passByReference function: " << num2 << " // Original value does change." << endl;

    cout << "\n";

    cout << "Num3 = " << num3 << endl;
    cout << "int Square function: " << i_squareNum(num3) << endl; 
    cout << "Num3C = " << num3 << endl;

    return 0;
}

void passByValue_squareNum(int n){
    n *= n;
    cout << "Inside passByValue function: " << n << endl;
}

void passByReference_squareNum(int &n){
    n *= n;
    cout << "Inside passByReference function: " << n << endl;
}

int i_squareNum(int &m){

    m = m * m;
    return m;
}