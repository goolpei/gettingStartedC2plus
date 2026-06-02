#include <iostream>
#include <string>
using namespace std;
void HelloWorld(string s){

    if (s == "print"){
        cout << "Hello World" << endl;
    } 
    else {
        cout << s << endl;
    }

}

int main(){

    HelloWorld("print");
    return 0;

}
