#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    // This is a Variable Length Array (VLA).
    // It is NOT technically part of the official C++ standard, 
    // though many compilers allow it as an "extension."
    int arr[size]; 

    arr[0] = 10;

    cout << arr[0];

    return 0;
}