#include <iostream>
using namespace std;
int main(){
    int a, b;
    char op;

    while(true){
        cout << "\n*********CALCULATOR*********" << endl;
        cout << "Enter '+' for Addition" << endl;
        cout << "Enter '-' for Subtraction" << endl;
        cout << "Enter '*' for Multiplication" << endl;
        cout << "Enter '/' for Division\n" << endl;

        cout << "Operation: ";
        cin >> op;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (op)
        {
            case '+':
                cout << a << " "<< op << " " << b << " = " << a + b << endl;
                break;
            case '-':
                cout << a << " "<< op << " " << b << " = " << a - b << endl;
                break;
            case '*':
                cout << a << " "<< op << " " << b << " = " << a * b << endl;
                break;
            case '/':
                if(b == 0){
                    cout << a << " "<< op << " " << b << " = undefined" << endl;
                    break;
                } 
                
                cout << a << " "<< op << " " << b << " = " << a / b << endl;
                break;
            
            default:
                break;
        }
    }

    


    return 0;
}