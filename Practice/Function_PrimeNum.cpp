#include <iostream>
using namespace std;

bool isPrime(int n){

    if (n <= 1) return false;
    for(int i = 2; i < n; i++){
        if (n % i == 0) return false;
    }
    return true;

}

int main(){

    int num;
    cout << "Enter num: ";
    cin >> num;

    if(isPrime(num)){
        cout << num << " is a Prime number.";
    } else {
        cout << num << " is a not Prime number.";
    }
    return 0;
}