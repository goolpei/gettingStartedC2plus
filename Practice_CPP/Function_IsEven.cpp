#include <iostream>
using namespace std;


bool isEven(int a){

    return a % 2 == 0;

}

int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(isEven(num)){
        cout << num << " is even.";
    } else {
        cout << num << " is not even.";
    }

    return 0;
}