#include <iostream>
using namespace std;
int main(){
    string str = "I love N a y e o n!";
    string result = "";
    int i = 0;

    while(i < str.length()){
        if(str[i] != ' '){
            result += str[i];
        }
        i++;
    }

    cout << result << endl;

    return 0;
}