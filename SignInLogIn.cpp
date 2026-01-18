#include <iostream>
#include <string>
using namespace std;
int main(){

    string username, pass, enteruser, enterpass;

    cout << "\nSIGN IN";
    cout << "\nEnter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> pass;
     do{
        cout << "\nLOG IN";
        cout << "\nEnter username: ";
        cin >> enteruser;
        cout << "Enter password: ";
        cin >> enterpass;

        if (enteruser != username && enterpass != pass) {
            cout << "Wrong username and password.\n";
            cout << "Try again (*/ω＼*)\n";
        } else if(enteruser != username){
            cout << "Wrong username.\n";
            cout << "Try again (*/ω＼*)\n";
        } else if(enterpass != pass){
            cout << "Wrong password.\n";
            cout << "Try again (*/ω＼*)\n";
        }
    } while(enteruser != username || enterpass != pass);

    cout << "Hello user! (❁´◡`❁)\n";

    return 0;
}