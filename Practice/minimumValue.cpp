#include <iostream>
using namespace std;
int main(){

    int arr[] = {2, 3, 5, 0, 6};
    int n = 5, min = arr[0];

    int i = 0;
    while(i < n){
        if(arr[i] < min){
            min = arr[i];}
        i++;}

    cout << "Minimum value: " << min << endl;
    
    return 0;
}