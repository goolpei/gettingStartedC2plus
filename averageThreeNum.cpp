#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    float average;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    average = (a + b + c) / 3.0;
    cout << "Average: " << average;
    return 0;
}