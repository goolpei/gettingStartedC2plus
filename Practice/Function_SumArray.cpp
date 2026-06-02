#include <iostream>
using namespace std;

int sumArray(int arr[], int arrSize){
    int sum = 0;
    for(int i = 0; i < arrSize; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    
    cout << "Total: " << sumArray(arr, size);

    return 0;
}