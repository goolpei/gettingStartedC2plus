// Character frequency counter in a string
#include <iostream>
#include <string>
using namespace std;

// function that 
int main(){

    string str;
    
    cout << "Enter a word: ";
    cin >> str;

    int storeCount[str.length()];
    
    for(int i = 0; i < str.length(); i++){
        int count = 0;
        for(int j = 0; j < str.length(); j++) {
            if(str[i] == str[j]) count++;
        }
        storeCount[i] = count;

    }


    // for(int i = 0; i < str.length(); i++ ){
    //     cout << storeCount[i] << endl;
    // }

    for(int i = 0; i < str.length(); i++){

        //lookback logic
        bool alreadyPrinted = false;
        for(int j = 0; j < i; j++){
            if(str[i] == str[j]){
                alreadyPrinted = true;
            }
        }

        if(!alreadyPrinted){
            cout << str[i] << " : " << storeCount[i] << endl;
        }
    }

    return 0;
}