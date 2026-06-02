#include <iostream>
using namespace std;

void passByVal(int a){
    a += 20;
}
void passByReference(int &a){
    a += 20;
}


int main(){

    int num1 = 5, num2 = 5;

    passByVal(num1);
    passByReference(num2);

    cout << "Num1 after pass by value: " << num1 << endl;
    cout << "Num2 after pass by reference: " << num2 << endl;

    return 0;
}