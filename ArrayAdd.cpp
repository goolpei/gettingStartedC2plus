#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1, 2, 4, 5};

    int addAtIndex = 2;
    int arrLength = 4;
    int addNum = 3;

    for(int i = arrLength - 1; i >= addAtIndex; i--){
        arr[i + 1] = arr[i];
    }


    arr[addAtIndex] = addNum;
    arrLength++;

    for(int i = 0; i < arrLength; i++) cout << arr[i] << " ";

    return 0;
}