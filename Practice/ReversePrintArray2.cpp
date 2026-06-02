#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int result[100];
    int i = 4, j = 0;

    while(i >= 0){
        result[j] = arr[i];
        j++;
        i--;
    }

    for(i = 0; i < 5; i++) cout << result[i] << " ";
    
    return 0;
}