#include <iostream>
#include <string>
using namespace std;

int countVowels(string str){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        str[i] = tolower(str[i]);
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    cout << "Enter a word or phrase: ";
    getline(cin, str);

    int count = countVowels(str);

    cout << "Vowel count: " << count << endl;

    return 0;
}