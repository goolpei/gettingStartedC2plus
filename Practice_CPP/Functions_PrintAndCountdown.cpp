#include <iostream>
using namespace std;

void printNumbers(int n){
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
}

void countdown(int n){
    while(n >= 1){
        cout << n << " ";
        n--;
    }
}

int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Print Numbers from 1 to " << num << ":\n";
    printNumbers(num);
    cout << "\nCountdown:\n";
    countdown(num);

    return 0;
}