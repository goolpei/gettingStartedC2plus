#include <iostream>
using namespace std;


bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){


    string str = " is not Prime.";
    

    for(int i = 1; i <= 10000; i++){

        if(isPrime(i)) {
            str = " is Prime";
            cout << i << str << endl; 
        }

        
        str = " is not Prime.";
    }

    return 0;
}