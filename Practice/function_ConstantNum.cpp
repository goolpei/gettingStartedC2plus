#include <iostream>
using namespace std;

void printNum(){
    const int a = 10;

    a = 20;


    cout << "Num: " << a;

}

int main(){
    printNum();
    return 0;
}