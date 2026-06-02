#include <iostream>
using namespace std;
int main(){

    int rowSizeChoose;
    cout << "Enter row size for diamond (only odd numbers): ";
    cin >> rowSizeChoose;

    
    int rowSize = rowSizeChoose / 2;

    int space = rowSize + 1;
    int stars = 1;


    for(int i = 0; i < rowSize; i++){

        for(int j = 0; j < space; j++) cout << " ";
        for(int k = 0; k < stars; k++) cout << "*";
        
        stars = stars + 2;
        space--;
        cout << "\n";
    }

    for(int i = rowSize; i >= 0 ; i--){

        for(int j = space; j > 0; j--) cout << " ";
        for(int k = stars; k > 0; k--) cout << "*";
        
        stars = stars - 2;
        space++;
        cout << "\n";
    }



    return 0;
}