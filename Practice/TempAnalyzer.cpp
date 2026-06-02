#include <iostream>
using namespace std;
int main(){
    int arrTemp[100];
    int i = 0, invalid = 0, warm = 0, hot = 0, cold = 0;

    cout << "Enter 10 temperatures: ";
    while(i < 10) cin >> arrTemp[i++];
      
    i = 0;
    while(i < 10){
        if(arrTemp[i] > 100 || arrTemp[i] < 0) invalid++;
        else if(arrTemp[i] < 20) cold++;
        else if(arrTemp[i] >= 20 && arrTemp[i] <= 30) warm++;
        else hot++;
        i++;
    }

    cout << "\nNumber of cold temperatures: " << cold << endl;
    cout << "Number of warm temperatures: " << warm << endl;
    cout << "Number of hot temperatures: " << hot << endl;
    cout << "Number of invalid temperatures: " << invalid << endl << endl;

    return 0;
}