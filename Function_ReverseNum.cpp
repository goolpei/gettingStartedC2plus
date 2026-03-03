#include <iostream>
using namespace std;

int reverseNum(int n){
    int reversed = 0;
    while(n != 0){
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed;
}

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reversed: " << reverseNum(n);

    return 0;
}