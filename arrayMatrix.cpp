#include <iostream>
using namespace std;
int main(){

    int matrix[3][2] = {
        {1, 4},
        {8, 3},
        {2, 5}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << matrix[i][j] << "  ";
        }
        cout << " " << endl;
    }
    return 0;
}