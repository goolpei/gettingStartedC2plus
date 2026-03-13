#include <iostream>
using namespace std;

void sort(int arr[]){

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Top 1: " << arr[0] << endl;
    cout << "Top 2: " << arr[1] << endl;
    cout << "Top 3: " << arr[2] << endl;

}

int top1(int arr[]){

    int high = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] > high) high = arr[i];
    }
    return high;

}

int top2(int arr[]){

    int mid = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] < top1(arr) && arr[i] > mid) mid = arr[i];
    }
    return mid;
}

int top3(int arr[]){

    int low = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] < top2(arr) && arr[i] > low) low = arr[i];
    }
    return low;
    
}

int main(){

    int arr[5];

    cout << "Enter 5 scores of students: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }



    // cout << "Top 1: " << top1(arr) << endl;
    // cout << "Top 2: " << top2(arr) << endl;
    // cout << "Top 3: " << top3(arr) << endl;

    sort(arr);

    

    return 0;
}
