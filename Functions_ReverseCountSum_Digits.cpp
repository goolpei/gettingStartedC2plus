#include <iostream>
using namespace std;

int reverseNumber(int n){
    int reversed = 0;
    while(n != 0){
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int countDigits(int n){
    int count = 0;

    do{
        n /= 10;
        count++;
    } while(n != 0);

    return count;
}

int sumDigits(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){

    int num;

    cout << "Enter number: ";
    cin >> num;

    cout << "Reversed Number: " << reverseNumber(num);
    cout << "\nCount Digits: " << countDigits(num);
    cout << "\nSum of Digits: " << sumDigits(num);

    return 0;
}