#include <iostream>
using namespace std;

int highestNum(int arr[], int a){
    int highest = arr[0];

    for(int i = 0; i < a; i++){
        if(arr[i] > highest) highest = arr[i];
    }
    return highest;
}

int lowestNum(int arr[], int a){
    int lowest = arr[0];

    for(int i = 0; i < a; i++){
        if(arr[i] < lowest) lowest = arr[i];
    }
    return lowest;
}

int main(){

    int arr[5];
    int size = 5;

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Highest num: " << highestNum(arr, size);
    cout << "\nLowest num: " << lowestNum(arr, size);

    return 0;
}