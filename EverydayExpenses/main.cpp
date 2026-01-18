#include <iostream>
#include <string>
#include <vector>
using namespace std;



struct Expense {
    string item;
    double amount;
};

vector<Expense> expenses;

void addExpense(){
    Expense e;

    cout << " Enter item: ";
    getline(cin, e.item);

    cout << " Enter expense: ";
    cin >> e.amount;
    cin.ignore();

    expenses.push_back(e);
                
    cout << " Expense added!" << endl;  
}

void listExpenses(){    
    if(expenses.empty()){
        cout << " No expenses recorded." << endl;
        return;
    }

    cout << "====Expenses====\n";
    for(size_t i = 0; i < expenses.size(); ++i){
        cout << " " << i + 1 << ". "
            << expenses[i].item << " | "
            << expenses[i].amount << "\n";
    }
}

void showTotal(){
    double total = 0.0;
    for(const auto& e : expenses){
        total += e.amount;
    }

    cout << total;
}

int main(){

    int choice;
    
    


    cout << "===========================" << endl;
    cout << "====EverdayExpenses_App====" << endl;


    do{

        cout << "===========================" << endl;
        cout << " Current total expenses: " << endl;
        cout << " ";
        showTotal();
        cout << "\n";
        cout << "===========================" << endl;
        cout << " 1. Add expense" << endl;
        cout << " 2. See expenses" << endl;
        cout << " 3. Exit" << endl;
        cout << " Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice){
            case 1: 
                addExpense();
                break;
            case 2:
                cout << "\n" << endl;
                listExpenses();
                cout << "\n" << endl;
                break;
            case 3: 
                cout << " See you next time!\n";
                break;
            default:
                cout << " Wrong input. Try again." << endl;
                break;
        }


    }while(choice != 3);



   return 0;
}