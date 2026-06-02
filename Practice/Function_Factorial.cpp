#include <iostream>
using namespace std;

long factorial(int a){

    long factorial = 1;
    
    for(int i = 1; i <= a; i++){
        factorial *= i;
    }

    return factorial;

}

int main(){

    cout << factorial(6);

    return 0;
}