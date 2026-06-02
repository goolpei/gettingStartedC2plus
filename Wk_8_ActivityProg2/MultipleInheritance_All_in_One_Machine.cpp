#include <iostream>
#include <string>
using namespace std;

class Printer{
public:
    void printDocument(){
        cout << "Printing document..." << endl;
    }
};
class Scanner{
public:
    void scanDocument(){
        cout << "Scanning document..." << endl;
    }
};
class Machine : public Printer, public Scanner{
public:
    void operateMachine(){
        cout << "Machine is operating." << endl;
    }
};

int main(){

    Machine m1;
    m1.printDocument();
    m1.scanDocument();
    m1.operateMachine();

    return 0;
}