#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 0, -1, -2, 0, 1, 0};
    int zeroes = 0, ones = 0, negativeOnes = 0, count = 0;

    cout << "\nArray contents: [ ";
    for(int i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << "]\n";

    for(int i = 0; i < 10; i++){
        if(arr[i] < 0) {arr[i] = 1; ones++;}
        else if(arr[i] > 0) {arr[i] = 0; zeroes++;}
        else {arr[i] = -1; negativeOnes++;}
    }

    count = ones + zeroes + negativeOnes;

    cout << "Array contents (replaced): [ ";
    for(int i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << "]\n";

    cout << "Total numbers changed: " << count << endl;

    return 0;
}