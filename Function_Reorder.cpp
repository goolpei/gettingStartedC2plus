#include <iostream>
using namespace std;

void reorder(int &a, int &b, int &c){
    int arr[] = {a, b, c};
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    a = arr[0];
    b = arr[1];
    c = arr[2];
}

int main(){


    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    reorder(a, b, c);

    cout << a << " " << b << " " << c;


    return 0;
}