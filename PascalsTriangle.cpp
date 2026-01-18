#include <iostream>
using namespace std;
int main(){
    int rows = 5;
    string faces[] = {
        " ",
        "( •̀ ω •́ )✧",
        "(❁´◡`❁)",
        "(*/ω＼*)",
        "(*^▽^*)",
        "╰(*°▽°*)╯",
    };

    for(int i = 0; i < rows; i++){

        for(int space = 0; space < rows - i; space++) cout << "    ";

        int value = 1;
        for(int j = 0; j <= i; j++){

            cout << faces[value] << " ";
            value = value * (i - j) / (j + 1);

        }
        cout << endl;
    }
    return 0;
}