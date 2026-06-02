#include <iostream>
using namespace std;
int main(){
    int arr[] = {5, 5, 5, 5, 1, 1, 2, 3, 5, 5};
    int count_five = 0, i = 0;
    while(i < 10){if(arr[i] == 5) count_five++; i++;} 
    cout << "Number of fives: " << count_five << endl;
    return 0;
}