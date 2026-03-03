#include <iostream>
using namespace std;
int main(){

    int arr[3][3];

    cout << "Enter array numbers:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Array:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "[" <<arr[i][j] << "] ";
        }
        cout << "\n";
    }


    int sumMatrix = 0;
    for(int i = 0; i < 3; i++){
        int sumRow = 0;
        int sumColumn = 0;
        for(int j = 0; j < 3; j++){
            sumRow += arr[i][j];
            sumColumn += arr[j][i];
            sumMatrix += arr[i][j];
            
        }
        cout << "Sum of row " << i + 1 << " : " << sumRow;
        cout << ", Sum of column " << i + 1 << " : " << sumColumn;
        cout << "\n";
    }
    cout << "Sum of matrix: " << sumMatrix;





    return 0;
}