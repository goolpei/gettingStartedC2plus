#include <iostream>
#include <string>
using namespace std;
int main(){

    int balance = 0;
    int choice;
    int withdraw, deposit;

    do{

        
        while(1){

            cout << "\nATM";
            cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit";
            cout << "\nEnter choice: ";

            if(!(cin >> choice)){
            cout << "\nInvalid input.";
            cin.clear();
            cin.ignore(1000, '\n');
            } else {
                break;
            }
        }

        

        switch (choice)
        {
        case  1:
            cout << "\nBalance: " << balance << "\n";
            break;
        case 2:
            cout << "Enter amount: ";

            if (!(cin >> deposit)){
                cout << "\nInvalid input.";
                cin.clear();
                cin.ignore(1000, '\n');
                break;
            }
            if(deposit <= 0){
                cout << "\nInvalid amount.";
            } else {
                balance += deposit;
                cout << "\nDeposited successfully.\n";
            }
            break;

        case 3:
            cout << "Enter amount: ";

            if(!(cin >> withdraw)){
                cout << "Invalid input.";
                cin.clear();
                cin.ignore(1000, '\n');
                break;
            }

            if(withdraw <= 0){
                cout << "\nInvalid amount.";
            } else if(withdraw > balance){
                cout << "\nWithdraw amount exceeds current balance.";
            } else {
                balance -= withdraw;
                cout << "\nWithdrawn successfully.\n";
            }
            
            break;

        case 4:
            cout << "\nThank you for using.";
            break;

        default:
            cout << "\nInvalid input."; 
            break;
        }
        
        




    } while(choice != 4);

    return 0;
}