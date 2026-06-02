#include <iostream>
using namespace std;

bool allPositive(int arr[], int size){

    for(int i = 0; i < size; i++){
        if(arr[i] <= 0) return false;
    }
    return true;

}

int main(){

    int arr[5];
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    if(allPositive(arr, 5)){
        cout << "All nums are positive.";
    } else {
        cout << "Not all nums are positive.";
    }

    return 0;
}