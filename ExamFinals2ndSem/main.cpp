#include <iostream>
using namespace std;

int countPos(int arr[]){
    int count = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] > 0) count++;
    }
    return count;

}

int countNeg(int arr[]){
    int count = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] < 0) count++;
    }
    return count;

}

int countZero(int arr[]){
    int count = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] == 0) count++;
    }
    return count;

}

int getLowest(int arr[]){
    int lowest = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] < lowest) lowest = arr[i];
    }
    return lowest;

}





void pnzl(int arr[]){
    int countP = 0;
    int countN = 0;
    int countZ = 0;
    int lowest = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] > 0) countP++;
        if(arr[i] < 0) countN++;
        if(arr[i] == 0) countZ++;
        if(arr[i] < lowest) lowest = arr[i];
    }

    cout << "Positive numbers: " << countP << endl;
    cout << "Negative numbers: " << countN << endl;
    cout << "Zero: " << countZ << endl;
    cout << "Lowest number: " << lowest << endl;
    
}

int main(){

    int arr[5];

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "Positive numbers: " << countPos(arr) << endl;
    cout << "Negative numbers: " << countNeg(arr) << endl;
    cout << "Zero: " << countZero(arr) << endl;
    cout << "Lowest number: " << getLowest(arr) << endl;

    //pnzl(arr);

    return 0;
}