#include <iostream>
#include <string>
using namespace std;
int main(){
    int count = 1;
    string faces[] = {
        "╰(*°▽°*)╯",
        "( •̀ ω •́ )✧",
        "(❁´◡`❁)",
        "(*/ω＼*)"
    };

    int rows = 4;
    for(int i = 1; i <= rows; i++){

        for(int spaces = 0; spaces < rows - i; spaces++){
            cout << "   ";
        }
        for(int j = 0; j < i; j++){
            cout << faces[i - 1];
            count++;
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}