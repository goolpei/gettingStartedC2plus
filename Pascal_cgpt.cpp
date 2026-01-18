#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;

    vector<vector<int>> pascal(n);

    // Build the triangle
    for (int i = 0; i < n; i++) {
        pascal[i].resize(i + 1);  
        pascal[i][0] = pascal[i][i] = 1; // first and last elements are 1

        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }



    // Print the triangle
    for (int i = 0; i < n; i++) {
    for (int space = 0; space < n - i - 1; space++)
        cout << " ";

    for (int j = 0; j < pascal[i].size(); j++)
        cout << pascal[i][j] << " ";

    cout << endl;
}

    
    return 0;
}
