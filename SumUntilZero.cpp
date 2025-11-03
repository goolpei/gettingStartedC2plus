#include <iostream>
using namespace std;
int main(){
    int nums = 0, sum = 0;
    while(true){
        cout << "Enter number (enter 0 to stop): ";
        cin >> nums;
        sum += nums;
        if(nums == 0) break;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}