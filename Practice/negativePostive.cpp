#include <iostream>
using namespace std;
int main(){

    int nums[10] = {2, -5, 11, 0, 0, -1, 4, 9, -2, 8};
    int i = 0, negative = 0, zero = 0, positive = 0;

    while(i < 10){
        if(nums[i] < 0){
            negative += 1;
        } else if(nums[i] == 0){
            zero += 1;
        } else if(nums[i] > 0){
            positive += 1;
        }
        i++;
    }

    cout << "Negatives: " << negative << endl;
    cout << "Zeroes: " << zero << endl;
    cout << "Positives: " << positive << endl;

    return 0;
}