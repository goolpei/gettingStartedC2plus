#include <iostream>
using namespace std;
int main(){

    int nums[5] = {1, 2, 3, 4, 5};
    int i = 0, j, temp;
 
    while(i < 5){
        j = i + 1;
        while(j < 5){
            if(nums[j] > nums[i]){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                }
            j++;
        }
        i++;
    }

    cout << "Sorted (descending): ";
    i = 0;
    while(i < 5) cout << nums[i++] << " ";

    return 0;
}