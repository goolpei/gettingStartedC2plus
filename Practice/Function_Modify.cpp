#include <iostream>
using namespace std;

void modify(int a, int &b){
    a *= 2;
    b *= 2;
}

int main(){

    int x = 10, y = 20;

    modify(x, y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}