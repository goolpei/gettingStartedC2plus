#include <iostream>

using namespace std;

int main(){


    while (true)
    {
    
    float num1, num2, result;
    char operation, choice;


    cout << "Enter first number: ";
    cin >> num1;

    if (cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input, please enter a number." << endl;
        continue;
    }

    cout << "Enter operator (+, -, *, /); ";
    cin >> operation;
    if (operation != '+' and operation != '-' and operation != '*' and operation != '/'){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input, please enter an operator (+, -, *, /)." << endl;
        continue;
    }

    cout << "Enter second number: ";
    cin >> num2;

    if (cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input, please enter a number." << endl;
        continue;
    }

    if (operation == '+'){
        result = num1 + num2;
    } else if (operation == '-'){
        result = num1 - num2;
    } else if (operation == '*'){
        result = num1 * num2;
    } else if (operation == '/'){
        if (num2 == 0){
            cout << num1 << " " << operation << " " << num2 << " " << "= undefined" << endl;
            continue;
        } 
        result = num1 / num2;
    } 
    cout << num1 << " " << operation << " " << num2 << " " << "=" << " " << result << endl;

    cout << "Do you want to continue? (Y/N): ";
    cin >> choice;

     
    if(choice == 'Y' || choice == 'y'){
        continue;
    } else {break;}

    }
    cout << "Process terminated.";
    return 0;
}