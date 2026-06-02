#include <iostream>
using namespace std;
int main(){
    float num1, num2, num3, num4, result;
    char operation;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation; 
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    cout << "Enter fourth number: ";
    cin >> num4;
    
    

    switch (operation)
    {
    case '+':
        result = num1 + num2 + num3 + num4;
        cout << "Result: " << result;
       
        break;
    case '-':
        result = num1 - num2 - num3 - num4;
        cout << "Result: " << result;
        break;
    case '*':
        result = num1 * num2 * num3 * num4;
        cout << "Result: " << result;
        break;
    case '/':
        if(num2 == 0 || num3 == 0 || num4 == 0){
            cout << "Result is undefined.";
           break;
        }
        result = num1 / num2 / num3 / num4;
        cout << "Result: " << result;
        break;
    default:
        cout << "Invalid input.";
        break;
        
    }
    return 0;
}