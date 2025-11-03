#include <iostream>
using namespace std;
int main(){

    int nums[10];
    int negative = 0, zero = 0, positive = 0;

    cout << "Enter 10 numbers: ";
    for(int i = 0; i < 10; i++) cin >> nums[i];

    for(int i = 0; i < 10; i++){
        if(nums[i] < 0) negative++;
        else if(nums[i] == 0) zero++;
        else positive++;
    }

    cout << "Negatives: " << negative << endl;
    cout << "Zeroes: " << zero << endl;
    cout << "Positives: " << positive << endl;
    
    return 0;
}