#include <iostream>
using namespace std;
int main(){
    int nums[5] = {1, 2, 3, 4, 5};
    int i = 4;
    while (i >= 0){
        cout << nums[i] << endl;
        i--;
    }
    return 0;
}