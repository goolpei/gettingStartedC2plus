#include <iostream>
using namespace std;

double power(double x, double y){
    if(y == 0) return 1;
    int result = 1;

    for(int i = 0; i < y; i++){
        result = result * x;
    }
    

    return result;
}

double factorial(int n){
    int res = 1;
    for(int i = 1; i <= n; i++){
        res = res * i;
    }
    return res;

}

int main(){

    cout << power(5, 3) << endl;
    cout << factorial(4);

    return 0;
}