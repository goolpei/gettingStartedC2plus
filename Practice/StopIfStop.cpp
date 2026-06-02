#include <iostream>
using namespace std;
int main(){
    string any;

    while(true){
    cout << "Enter anything (Enter 'stop' to exit): ";
    cin >> any;
    if(any == "stop"){
        break;
    }

    cout << "You entered: " << any << endl;
    }

    cout << "Session terminated." << endl;
    return 0;
}