#include <iostream>
using namespace std;



int main(){

    int nums[5];
    int i, j, temp;
    char choice;
    string sort;

    cout << "Enter five numbers: ";
    i = 0;
    while(i < 5){
        cin >> nums[i];
        i++;
    }

    cout << "Enter type of sorting (A for ascending, B for descending): ";
    cin >> choice;
        if(choice == 'A' || choice == 'a'){
            sort = "Ascending";
            i = 0;
            while(i < 5){
            j = i + 1;
            while(j < 5){
                if(nums[j] < nums[i]){
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
                j++;
            }
            i++;
            }
        } else {
            sort = "Descending";
            i = 0;
            while(i < 5){
            j = i + 1;
            while(j < 5){
                if(nums[j] > nums[i]){
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
                j++;
            }
            i++;
            }
        }

    cout << "Sorted " << sort << ": ";
    i = 0;
    while(i < 5) cout << nums[i++] << " ";


    return 0;
}