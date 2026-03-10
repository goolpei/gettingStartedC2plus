#include <iostream>
using namespace std;


bool isPalindrome(string str){
    int left = 0;
    int right = str.length() - 1;

    while(left < right){
        if(str[left] != str[right]) return false;
        left++;
        right--;
    }

    return true;

}

int main(){

    string str;
    cout << "Enter word or phrase: ";
    getline(cin, str);

    if(isPalindrome(str)){
        cout << str << " is Palindrome.";
    } else {
        cout << str << " is not Palindrome.";
    }

    return 0;
}