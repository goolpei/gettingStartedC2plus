#include <iostream>
using namespace std;
int main(){
    int nums[5];
    int i = 0;

    cout << "Enter five numbers: ";
    while (i < 5){
        cin >> nums[i];
        i++;
    }

    cout << "You entered: ";
    i = 0;
    while (i < 5){
        cout << nums[i] << " ";
        i++; 
    }
    return 0;
}