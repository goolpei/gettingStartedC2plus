#include <iostream>
using namespace std;

int getSum(int arr[], int arrSize){
    int sum = 0;
    for(int i = 0; i < arrSize; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int arr[5];
    int size = 5;
    cout << "Enter 5 numbers: ";

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Total: " << getSum(arr, size);

    return 0;
}