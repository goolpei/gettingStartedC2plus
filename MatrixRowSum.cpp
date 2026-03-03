#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    
    cout << "Enter 9 numbers for the 3x3 matrix: ";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate and display row sums
    for(int i = 0; i < 3; i++) { int rowSum = 0;
        for(int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " 
        << rowSum << "\n"; 
    } 
    return 0;
}