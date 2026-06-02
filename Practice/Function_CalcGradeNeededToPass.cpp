#include <iostream>
using namespace std;

double endtermGradeNeeded(double prelim, double midterm){
    double gradePassed = 4.9;
    double endtermGNeeded = (-(prelim * 0.3) - (midterm * 0.3) + gradePassed) / 0.4;
    return endtermGNeeded;
}

int main(){
    double prelimG, midtermG;

    cout << "\nThis is a calculator for the minimum {endterm} grade that you would need in order to pass a subject.\n";
    cout << "Enter prelim grade: ";
    cin >> prelimG;
    cout << "Enter midterm grade: ";
    cin >> midtermG;

    double endtermGNeeded = endtermGradeNeeded(prelimG, midtermG);
    
    cout << "Minimum endterm grade needed in order to pass: " << endtermGNeeded << endl << endl;

    return 0;
}

