#include <iostream>
using namespace std;

float add(float a, float b){
    return a + b;
}
float subtract(float a, float b){
    return a - b;
}
float multiply(float a, float b){
    return a * b;
}
float divide(float a, float b){
    return a / b;
}

int main(){
    float num1, num2, result;
    char operation, choice;

    while(true){

        while (true)
        {
        cout << "Enter first number: ";
        cin >> num1;
        if (cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input, please enter a number." << endl;
        continue;
        } else{break;}
        }

        while (true)
        {
        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;
        if (operation != '+' and operation != '-' and operation != '*' and operation != '/'){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input, please enter an operator (+, -, *, /)." << endl;
        continue;
        } else {break;}
        }

        while (true)
        {        
        cout << "Enter second number: ";
        cin >> num2;
        if (cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input, please enter a number." << endl;
        continue;
        } else {break;}
        }

        if(operation == '+'){
            result = add(num1, num2);
        } else if(operation == '-'){
            result = subtract(num1, num2);
        } else if(operation == '*'){
            result = multiply(num1, num2);
        } else if(operation == '/'){
            if(num2 == 0){
                cout << num1 << " " << operation << " " << num2 << " = Undefined"  << endl;
                cout << "Do you want to continue? (Y/N): ";
                cin >> choice;
                if(choice != 'y' && choice != 'Y'){
                    break;
                } else {continue;}
            }
            result = divide(num1, num2);
        }

        cout << num1 << " " << operation << " " << num2 << " = " << result << endl;

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;
        if(choice != 'y' && choice != 'Y'){
            break;
        }




    }

    cout << "Process terminated." << endl;
    return 0;

}