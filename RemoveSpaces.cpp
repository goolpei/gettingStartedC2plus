#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "I love Nayeon!";
    char result[100];
    int i = 0, j = 0;

   

    while(str[i] != '\0'){
        if(str[i] != ' '){
            result[j] = str[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';

    cout << result;
    return 0;
}