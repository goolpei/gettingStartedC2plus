// Armstrong Number Checker

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num;
    cout << "Enter a 3 digit number: ";
    
    
    if(!(cin >> num) || num < 100 || num > 999){
        cout << "Invalid input.";
        cin.clear();
        cin.ignore(1000, '\n');
        return 0;
    }


    // abc
    // a = 100, b = 10, c = 1
    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;


    if(num == pow(a, 3) + pow(b, 3) + pow(c, 3)){
        cout << num << " is an Armstrong number.";
    } else {
        cout << num << " is not an Armstrong number.";
    }



    return 0; 

}