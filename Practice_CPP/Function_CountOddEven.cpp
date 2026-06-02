#include <iostream>
using namespace std;

int countOdd(int arr[], int a){
    int odd = 0;
    for(int i = 0; i < a; i++){
        if(arr[i] % 2 != 0) odd++;
    }
    return odd;


}
int countEven(int arr[], int a){
    int even = 0;
    for(int i = 0; i < a; i++){
        if(arr[i] % 2 == 0) even++;
    }
    return even;

}

int main(){

    int arr[10];
    int size = 10;

    cout << "Enter 10 numbers: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int evenNums = countEven(arr, size);
    int oddNums = countOdd(arr, size);

    cout << "Number of odd nums: " << oddNums;
    cout << "\nNumber of even nums: " << evenNums;

    return 0;
}