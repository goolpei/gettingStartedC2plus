#include <iostream>

using namespace std;
int main(){
    int arr[10];

    cout << "Input 10 numbers into array: ";
    for(int i = 0; i < 10; i++) cin >> arr[i];

    cout << "Array contents: ";
    for(int i = 0; i < 10; i++) cout << "[" << arr[i] << "]";


    cout << "\n";


    for(int i = 0; i < 10; i++) cout << "Index " << i << " value: " << arr[i] << "\n";
    


    return 0;
}