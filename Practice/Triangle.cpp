#include <iostream>
using namespace std;
int main(){
    int rowSize;

    cout << "Enter desired triangle size: ";
    cin >> rowSize;
    
    int space = rowSize - 1;
    int stars = 1;


    for(int i = 0; i < rowSize; i++){

        for(int j = 0; j < space; j++){
            cout << " ";
        }

        for(int k = 0; k < stars; k++){
            cout << "*";
        }
        
        stars = stars + 2;
        space--;

        cout << "\n";
    }



    // 0000*
    // 000***
    // 00*****
    // 0*******
    // *********


    return 0;
}