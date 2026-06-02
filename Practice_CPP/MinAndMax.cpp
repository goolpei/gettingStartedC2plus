#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int max = arr[0], min = arr[0];

    for(int i = 0; i < 10; i++){
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}