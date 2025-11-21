#include <iostream>
using namespace std;
int main(){
    int arr[100], i = 0, j = 0, temp, odd = 0, even = 0;

    cout << "Enter 10 numbers: ";
    for(i = 0; i < 10; i++) cin >> arr[i];

    cout << "\nArray contents: [ ";
    for(i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << "]";

    //sort
    for(i = 0; i < 10; i++){
        
        for(j = i + 1; j < 10; j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nArray contents (sorted ascending): [ ";
    for(i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << "]";

    //oddEven
    for(i = 0; i < 10; i++){
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }

    cout << "\nAmount of even numbers: " << even;
    cout << "\nAmount of odd numbers: " << odd << endl << endl;

    return 0;
}