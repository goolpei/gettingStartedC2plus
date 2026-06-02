#include <iostream>
using namespace std;
int main(){

    int arr[] = {2, 3, 50, 8, 1};
    int max = arr[0];
    for(int i = 0; i < 5; i++) if(arr[i] > max) max = arr[i];
    cout << "Maximum value: " << max << endl;
    return 0;
}