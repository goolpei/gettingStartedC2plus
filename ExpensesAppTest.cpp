#include <iostream>
#include <string>
using namespace std;
int main(){

    int totalExpenses = 0, expense;
    int choice;


    cout << "\nWelcome to EverdayExpensesApp!" << endl;
    
    do{

    
    cout << "Current total expenses: " << totalExpenses << endl ;
    cout << "1. Add expense" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1){
        cout << "Enter amount: ";
        cin >> expense;
        totalExpenses = totalExpenses + expense;
    }

    } while (choice != 2);

    cout << "See ya (*^▽^*)!" << endl;
    

    return 0;
}