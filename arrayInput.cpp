#include <iostream>
using namespace std;
int main(){

    int num[5];

    cout << "Enter five numbers: ";
    for(int i = 0; i < 5; i++){
        cin >> num[i];
    }
    cout << "You entered: ";
    for(int i = 0; i < 5; i++){
        cout << num[i] << " ";
    }

    return 0;
}