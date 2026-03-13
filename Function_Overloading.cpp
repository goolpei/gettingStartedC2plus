#include <iostream>
using namespace std;


double calculateArea(double r){
    return 3.1416 * r * r;
}

double calculateArea(double l, double w){
    if (w == 0) return calculateArea(l);
    return l * w;
}

double calculateArea(double b, double h, bool isTriangle){
    if(!isTriangle){
        return calculateArea(b, h);
        
    }
    return b * h * 0.5;
    
}

int main(){

    double a, b;
    string c;
    bool isT = false;
    


    cout << "Enter:\nRadius (input zero after radius) /\nLength and width /\nBase and height /\n";
    cin >> a >> b;

    cout << "Is triangle (y/n)?: ";
    cin >> c;

    if(c == "y" || c == "Y") isT = true;

    double res = calculateArea(a, b, isT);

    cout << "Area: " << res << endl;



    return 0;
}