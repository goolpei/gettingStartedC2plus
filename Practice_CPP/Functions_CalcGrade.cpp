#include <iostream>
using namespace std;

double calcGrade(double prelim, double midterm, double endterm){
    double grade = (prelim * 0.3) + (midterm * 0.3) + (endterm * 0.4);
    return grade;
}

string gradeEvaluation(double num){
    if(num < 0 || num > 10){
        return "Invalid grade.";
    } else if(num >= 0 && num < 4.9){
        return "Failed.";
    } else if(num >= 4.9 && num < 9){
        return "Passed.";
    } else if(num >= 9){
        return "Excellent.";
    } else {
        return "Error.";
    }
}

int main(){

    double prelimGrade, midtermGrade, endtermGrade;
    cout << "Enter Prelim Grade: ";
    cin >> prelimGrade;
    cout << "Enter Midterm Grade: ";
    cin >> midtermGrade;
    cout << "Enter Endterm Grade: ";
    cin >> endtermGrade;

    double calculatedGrade = calcGrade(prelimGrade, midtermGrade, endtermGrade);
    string gradeResult = gradeEvaluation(calculatedGrade);
    
    cout << "Overall grade of subject: " << calculatedGrade;
    cout << "\nEvaluation: " << gradeResult;

    return 0;
}