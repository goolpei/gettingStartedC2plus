#include <iostream>
#include <string>
using namespace std;
int main(){

    string username = "admin";
    string password = "superpass1";
    
    string enteruser;
    string enterpass;

    do{

        printf("\nEnter username: ");
        cin >> enteruser;

        printf("Enter password: ");
        cin >> enterpass;

        if (enteruser != username && enterpass != password) {
            printf("Wrong username and password.\n");
            printf("Try again (*/ω＼*)\n");
        } else if(enteruser != username){
            printf("Wrong username.\n");
            printf("Try again (*/ω＼*)\n");
        } else if(enterpass != password){
            printf("Wrong password.\n");
            printf("Try again (*/ω＼*)\n");
        }
        
    } while(enteruser != username || enterpass != password);

    printf("Hello user! (❁´◡`❁)\n");

    return 0;
}