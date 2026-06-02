    // factorial(a) = a * (a-1) * (a-2) * (a-3) ... while(a != 0)
#include <iostream>
using namespace std;

long factorial(int n){
    long res = 1;
    
    while(n != 0){
        res = res * n;
        n--;
    }

    return res;

}

int main(){

    cout << factorial(5);

    return 0;
}