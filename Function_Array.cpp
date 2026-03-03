//input arr
//print arr
//average 
//count positive

#include <iostream> 
using namespace std;

void inputArr(int arr[], int size){
    
    for(int i = 0; i < size; i++) cin >> arr[i];
}

void printArr(int arr[], int size){
    
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

double average(int arr[], int size){
    double ave;
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    ave = sum / size;
    return ave;
}

int countPositive(int arr[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > 0) count++;
    }
    return count;
}

int main(){

    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter 5 numbers: ";
    inputArr(arr, SIZE);
    cout << "Array: ";
    printArr(arr, SIZE);

    cout << "\nAverage: " << average(arr, SIZE) << endl;
    cout << "Positive numbers: " << countPositive(arr, SIZE) << endl;




    return 0;
}