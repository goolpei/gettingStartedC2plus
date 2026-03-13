#include <iostream>
using namespace std;

double getAvg(int arr[]){
    double avg;
    double sum = 0;

    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    avg = sum / 5;
    return avg;
}

int getHighest(int arr[]){
    int high = arr[0];

    for(int i = 0; i < 5; i++){
        if(arr[i] > high) high = arr[i];
    }
    return high;
}

int getLowest(int arr[]){
    int low = arr[0];

    for(int i = 0; i < 5; i++){
        if(arr[i] < low) low = arr[i];
    }
    return low;
}


int main(){

    int arr[5];

    cout << "Enter scores of 5 students: ";

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "Class average: " << getAvg(arr) << endl;
    cout << "Highest score: " << getHighest(arr) << endl;
    cout << "Lowest score: " << getLowest(arr) << endl;



    return 0;
}