#include <iostream>
#include <string>
using namespace std;

class Shape{
public:
    void displayShape(){
        cout << "This is a shape." << endl;
    }
};
class Circle : public Shape{
public:
    void displayCircle(){
        cout << "This is a circle." << endl;
    }
};
class Rectangle : public Shape{
public:
    void displayRectangle(){
        cout << "This is a rectangle." << endl;
    }
};

int main(){
    Circle c1; 
    Rectangle r1;
    c1.displayShape();
    c1.displayCircle();
    r1.displayShape();
    r1.displayRectangle();
    return 0;
}