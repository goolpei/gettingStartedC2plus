#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    string faces[] = {
        "╰(*°▽°*)╯",
        "( •̀ ω •́ )✧",
        "(❁´◡`❁)",
        "(*/ω＼*)",
        "(*^▽^*)"
    };

    for (int i = 0; i < rows; i++) {
        // Print spaces for pyramid alignment
        for (int space = 0; space < rows - i - 1; space++)
            cout << "    ";

        // Print emojis for each position in the row
        for (int j = 0; j <= i; j++) {
            cout << faces[j % 5] << "    "; // spacing to keep it aligned
        }

        cout << endl;
    }

    return 0;
}
