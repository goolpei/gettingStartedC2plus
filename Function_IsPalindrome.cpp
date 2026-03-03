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

bool isPalindrome(int n){
    return (n == reverseNum(n));
}

int main(){

    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Reversed: " << reverseNum(num) << endl;

    if(isPalindrome(num)){
        cout << "Number is a palindrome.";
    } else {
        cout << "Number is not a palindrome."; 
    }

    

    return 0;
}