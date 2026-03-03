#include <iostream>
using namespace std;

int sort(int arr[], int size){
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

    return arr;
}

int main(){
    return 0;
}