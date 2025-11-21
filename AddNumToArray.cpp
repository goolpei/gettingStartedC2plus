#include <iostream>
using namespace std;
int main(){
    int arr[100], i = 0, count = 0;

    while(true){
        cout << "Enter number to add to array (enter 'x' to stop): ";
        cin >> arr[i];
        if (cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            break;
        }
        i++;

        cout << "\nArray contents: [ ";
        for(count = 0; count < i; count++) cout << arr[count] << " ";
        cout << "]\n";
    }

    cout << "\nProgram terminated.\n" << endl;

    return 0;
}