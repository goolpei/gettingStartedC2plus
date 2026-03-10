// longest substring without repeating characters
#include <iostream>
#include <string>
using namespace std;

int main(){

    string temp;
    string str;

    int numTemp;
    

    cout << "Enter string: ";
    cin >> str;

    temp = "      ";
    
    for(int i = 0; i < str.length(); i++){
        
        
        int k = 0;
        int j = i + 1;


        while(str[i] != str[j]) {

            temp[k] = str[j];
            j++;
            k++;
        }
        temp[k] = str[i];
        
        
        cout << temp << endl;

          
    }

    
    

    return 0;
}