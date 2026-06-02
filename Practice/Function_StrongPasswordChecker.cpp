#include <iostream>
#include <string>
using namespace std;

bool isStrongPass(string pass){
    bool hasDigits = false;
    bool hasUpper = false;

    if(pass.length() < 8){
        return false;
    }

    for(int i = 0; i < pass.length(); i++){
        if(pass[i] >= '0' && pass[i] <= '9'){
            hasDigits = true;
        }
        if(pass[i] >= 'A' && pass[i] <= 'Z'){
            hasUpper = true;
        }
    }

    return hasDigits && hasUpper;

}

int main(){

    string pass;
    cout << "Enter password: ";
    cin >> pass;

    if(isStrongPass(pass)){
        cout << "That is a strong password.";
    } else{
        cout << "That is not a strong password.";
    }

    return 0;
}