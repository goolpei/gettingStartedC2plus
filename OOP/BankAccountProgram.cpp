#include <iostream>
#include <string>
using namespace std;

class BankAccount{
public:
    string AccName;
    double Balance;
    BankAccount(string name, double b){
        AccName = name;
        Balance = b;
    }
    void deposit(double amount){
        if (amount > 0) {
            Balance += amount;
        } 
    }
    void withdraw(double amount){
        if (amount > Balance){
            cout << "Insufficient balance." << endl;
        } else if (amount > 0) {
            Balance -= amount;
        }
    }
    void displayBalance(){
        cout << "Account Name: " << AccName << endl;
        cout << "Balance: " << Balance << endl;
    }
};

int main(){
    BankAccount b1 = BankAccount("Harambe", 100);
    b1.deposit(201.4);
    b1.withdraw(500);
    b1.displayBalance();
}