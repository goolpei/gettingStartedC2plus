#include <iostream>
using namespace std;

void sort(int arr[], int size){

    int temp;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
        }
    }

}

int main(){

    int arr[5];
    int size = 5;

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < size; i++) cin >> arr[i];

    sort(arr, size);

    cout << "Sorted array (ascending): ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";



    return 0;
}