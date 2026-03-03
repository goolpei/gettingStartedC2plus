#include <iostream>
using namespace std;

void printNum(int n){
    for (int i = 1; i <= n; i++){
        cout << i << " ";
    }
}

// int printNum2(int n){

// }

int main(){
    int num;
    cout << "Enter num: ";
    cin >> num;
    printNum(num);

    return 0;
}