#include <iostream>

using namespace std;


// double power(double x, double y){
//     double result = 1;
//     if(y == 0) result = 1;

//     result = result * power(x, y - 1);

//     return result;
// }


int getLowest(int arr[]){
    int low = arr[0];

    for(int i = 0; i < 5; i++){
        if(arr[i] < low) low = arr[i];
    }
    return low;
}

double getAvg(int arr[]){
    double avg;
    double sum = 0;

    
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }

    sum = sum - getLowest(arr);
    avg = sum / 4;
    return avg;
}



int main(){

    int arr[5];

    cout << "Enter scores of 5 students: ";

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    
    cout << "Lowest score dropped: " << getLowest(arr) << endl;
    cout << "Average (without lowest): " << getAvg(arr) << endl;

    //cout << power(3, 3);

    return 0;
}