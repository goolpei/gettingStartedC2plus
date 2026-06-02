#include <iostream>
using namespace std;

void displayMultiplicationTable(int n){

    for(int i = 1; i <= 10; i++){
        cout << n << " * " << i << " = " << n * i << endl;
    }

}

int main(){

    int num;
    cout << "Enter num: ";
    cin >> num;
    displayMultiplicationTable(num);

    return 0;
}