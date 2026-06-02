#include <iostream>
using namespace std;
int main(){
    int j, rows = 4;

    for(int i = 1; i <= rows; i++){

        for(int spaces = 0; spaces < rows - i; spaces++){
            cout << " ";
        }
        
        for(int j = 0; j < i; j++){
            cout << i;
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}