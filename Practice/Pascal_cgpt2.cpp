#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int space = 0; space < rows - i - 1; space++) {
            cout << " ";
        }

        int value = 1;  // First value in each row is always 1
        for (int j = 0; j <= i; j++) {
            cout << value << " ";
            // Compute next value in row using combination formula
            value = value * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
