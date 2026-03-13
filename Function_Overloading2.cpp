#include <iostream>
using namespace std;


double calcArea(double r){
    return 3.1416 * r * r;
}

double calcArea(double l, double w){
    return l * w;
}

double calcArea(double b, double h, bool isTri){
    return b * h * 0.5;
}

int main(){

    double a, b;
    int c;

    cout << "1. Circle\n2. Rectangle\n3. Triangle\nEnter choice: ";
    cin >> c;

    switch (c)
    {
    case  1:
    
        cout << "Enter radius: ";
        cin >> a;
        cout << "Area: " << calcArea(a);
        break;

    case  2:
    
        cout << "Enter length and width: ";
        cin >> a >> b;
        cout << "Area: " << calcArea(a, b);
        break;

    case  3:
    
        cout << "Enter base and height: ";
        cin >> a >> b;
        cout << "Area: " << calcArea(a , b, true);
        break;
    
    default:

        cout << "Invalid.";
        break;
    }


    return 0;
}