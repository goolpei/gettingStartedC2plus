#include <iostream>
using namespace std;
int addTen(int &a);
int addTenResult(int &a);
int main(){

    
    int num = 1;
    int num2 = 2;
   
    addTen(num);
    addTenResult(num2);

    cout << num << endl;
    cout << num2 << endl;

    return 0;
}

int addTen(int &a){
    a += 10;
    return a;
}

int addTenResult(int &a){
    int res = a + 10;
    return res;
}