#include <iostream>
using namespace std;

void countdown(int a){
    int i = a;
    while(i >= 1){
        cout << i << " ";
        i--;
    }
}

int main(){
    countdown(10);
    return 0;
}