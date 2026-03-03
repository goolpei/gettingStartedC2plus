#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    for(int i = 0; i < 15; i++){

        if(arr[i] % 3 == 0 && arr[i] % 5 == 0){cout << arr[i] << " is a multiple of both 3 and 5." << endl;
        
        } else if(arr[i] % 5 == 0) {cout << arr[i] << " is a multiple of 5." << endl;
        } else if(arr[i] % 3 == 0) {cout << arr[i] << " is a multiple of 3." << endl;
        } else {cout << arr[i] << " is neither a multiple of 3 or 5" << endl;}    
    }
    return 0;
}