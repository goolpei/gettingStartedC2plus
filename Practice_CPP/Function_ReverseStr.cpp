#include <iostream>
#include <string>
using namespace std;

string reverseStr(string &str){

    char temp;
    int left = 0;
    int right = str.length() - 1;
    while(left < right){
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    return str;
}

bool isPalindrome(string str){
    if (str == reverseStr(str)){
        return true;
    }
    return false;
}

int main(){

    string str;
    cout << "Enter a phrase or word: ";
    getline(cin, str);

    cout << "Reversed: " << reverseStr(str) << endl;
    
    if(isPalindrome(str)){
        cout << "Is a palindrome.";
    } else{
        cout << "Is not a palindrome.";
    }

    return 0;
}