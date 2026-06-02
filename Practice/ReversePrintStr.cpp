#include <iostream>
using namespace std;
int main(){
    string str = "I love Nayeon!";
    int left = 0, right = str.size() - 1;
    char temp;
    while(left < right){
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }

    cout << str;
    

    return 0;
}