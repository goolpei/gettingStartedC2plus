#include <iostream>
using namespace std;


int getMax(int arr[], int a){
    int max = arr[0];
    for(int i = 1; i < a; i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int getMin(int arr[], int a){
    int min = arr[0];
    for(int i = 1; i < a; i++){
        if(arr[i] < min) min = arr[i];
    }
    return min;
}

int getSum(int arr[], int a){
    int sum = 0;
    for(int i = 0; i < a; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int arr[5];

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++) cin >> arr[i];

    cout << "Max: " << getMax(arr, 5) << endl;
    cout << "Min: " << getMin(arr, 5) << endl;
    cout << "Sum: " << getSum(arr, 5) << endl;
}