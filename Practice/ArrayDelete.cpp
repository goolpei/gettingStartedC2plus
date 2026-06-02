#include <iostream>
using namespace std;
int main(){


    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int arrLength = 10;
    int startIndexDelete = 2;
    int endIndexDelete = 7;

    int deleteCount = endIndexDelete - startIndexDelete + 1; //6

                //2                      //4
    for(int i = startIndexDelete; i < arrLength - deleteCount; i++){
        arr[i] = arr[i + deleteCount];
    }

    arrLength -= deleteCount;

    for(int i = 0; i < arrLength; i++){
        cout << arr[i] << " ";
    }

    return 0;
}