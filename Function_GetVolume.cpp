#include <iostream>
#include <cmath>
using namespace std;

double getVolCube(double s){
    return s * s * s;
}

double getVolCylinder(double height, double radius){
    return 3.1416 * radius * radius * height;
}

double getVolRectPrism(double l, double w, double h){
    return l * w * h;
}

int main(){


    double length, width, height, radius;
    int choice;

    cout << "Choose shape:\n1. Cube\n2. Cylinder\n3. Rectangular Prism\n";

    cin >> choice;
    if(cin.fail()){
        cout << "Invalid choice.";
        cin.clear();
        cin.ignore(1000, '\n');
        return 0;
    }



    switch (choice) {
    case 1:
        cout << "Enter length of sides: ";
        cin >> length;
        cout << "Volume: " << getVolCube(length);
        break;

    case 2:
        cout << "Enter height then radius: ";
        cin >> height >> radius;
        cout << "Volume: " << getVolCylinder(height, radius);
        break;

    case 3:
        cout << "Enter length, width, then height: ";
        cin >> length >> width >> height;
        cout << "Volume: " << getVolRectPrism(length, width, height);
        break;
    
    default:
        cout << "Invalid choice.";
        break;
    }

    return 0;
}