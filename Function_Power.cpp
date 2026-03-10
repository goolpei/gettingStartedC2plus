#include <iostream>
using namespace std;

double power(double x , double y){
    int result = 1;
    
    for(int i = 0; i < y; i++){
        result = result * x;
    }

    return result;
}

int main(){

    int x, y;
    cout << "Enter number: ";
    cin >> x;
    cout << "Enter power: ";
    cin >> y;

    cout << "Result: " << power(x, y) << endl;
    
    return 0;
}