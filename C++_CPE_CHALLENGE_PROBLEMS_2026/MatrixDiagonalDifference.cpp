#include <iostream>
#include <cmath>

// void storeNum_Matrix(int size){
//     int matrix[size][size];

// }

using namespace std;
int main(){


    int matSize;
    double leftDiagonal = 0, rightDiagonal = 0;
    double diagonalDif;

    cout << "Enter matrix size: ";
    cin >> matSize;

    int matrix[matSize][matSize];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < matSize; i++){
        for(int j = 0; j < matSize; j++){
            cin >> matrix[i][j];


            if(i == j) leftDiagonal += matrix[i][j];
            if(i + j == matSize - 1) rightDiagonal += matrix[i][j];

        }
    }

    // cout << "Left Diagonal Sum: " << leftDiagonal;
    // cout << "Right Diagonal Sum: " << rightDiagonal;

    diagonalDif = abs(leftDiagonal - rightDiagonal);

    cout << "Diagonal difference: " << diagonalDif << endl;


    return 0;
}