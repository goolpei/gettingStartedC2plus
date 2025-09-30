#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello Nayeon (｡♥‿♥｡)" << endl;
}
void greet(string name){
    cout << "Hello " << name << " (≧◡≦✿)" << endl;
}
int add(int a, int b){
    return a + b;
}

int main(){


    sayHello();
    greet("Nayeon");
    int result = add(1, 100);
    cout << "Sum: " << result << endl;
    return 0;
    
}