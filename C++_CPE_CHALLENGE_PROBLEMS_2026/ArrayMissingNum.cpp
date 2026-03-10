#include <iostream>
using namespace std;
int main(){

    int arrSize;
    int missingNum;

    int setNum;


    while(true){

        cout << "Enter array size: ";
        cin >> arrSize;

        if(arrSize < 2) {
            cout << "Invalid array size (only n > 1 is allowed). Try again.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        } else {
            break;
        }
       
    }

    

    int arr[arrSize];
    int arrCompare[arrSize];

    
    for(int i = 0; i < arrSize; i++){
        cout << "Enter array elements: ";
        cin >> arr[i];

        if(i == 0){
            setNum = arr[0];
        }
        

        arrCompare[i] = setNum;
        setNum = setNum + 1;
    }


    


    for(int i = 0; i < arrSize; i++){
        if(arr[i] != arrCompare[i]) {
            missingNum = arrCompare[i];
            break;
        }
    }


    cout << "Missing num: " << missingNum;

    

    

    return 0;
}