#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int reverse = 0;
    int orig = n;

    while(n != 0){
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }

    if (reverse == orig) return 1;
    return 0;

}

bool isOdd(int n){
    if(n % 2 == 0) return 0;
    return 1;
}

int main(){

    int num;
    cout << "Enter number: ";
    cin >> num;

    if(isPalindrome(num)){
        cout << num << " is Palindrome."  << endl;
    } else {
        cout << num << " is not Palindrome."  << endl;
    }

    if(isOdd(num)){
        cout << num << " is Odd." << endl;
    } else {
        cout << num << " is not Odd."  << endl;
    }

    return 0;
}