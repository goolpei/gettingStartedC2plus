#include <iostream>

using namespace std;


// abstraction
class AbstractStudent{ 
    virtual void isFinisher() = 0;
};

class Student : AbstractStudent{


    // encapsulation
    private: // access modifier
        int ID;
        string NAME;
        int GRADE;
        string SECTION;

    public: // access modifier

        //methods

        //setters
        void setId(int id) {ID = id;}
        void setName(string name) {NAME = name;}
        void setGrade(int grade) {GRADE = grade;}
        void setSection(string section) {SECTION = section;}

        //getters
        int getId() {return ID;}
        string getName() {return NAME;}
        int getGrade() {return GRADE;}
        string getSection() {return SECTION;}

        //constructor
        Student(int id, string name, int grade, string section){
            ID = id;
            NAME = name;
            GRADE = grade;
            SECTION = section;
        }

        virtual void introduceStudent(){
            cout << "Name: " << NAME << endl;
            cout << "ID: " << ID << endl;
            cout << "Grade: " << GRADE << endl;
            cout << "Section: " << SECTION << endl;
        }

        void isFinisher(){  
            if(GRADE != 12) {
                cout << NAME << " is not in process for graduation." << endl;
            } else{
                cout << NAME << " is in process for graduation." << endl;
            }
        }

};


// inheritance
class Irreg : public Student {

    public:
        string SubjectFailed;
        bool HaveSubFail = false;
        Irreg (int id, string name, int grade, string section, string subjectFailed) : Student(id, name, grade, section)
        {
            SubjectFailed = subjectFailed;
            HaveSubFail = true;
        }

        void showFailedSub(){
            cout << "Subject Failed: " << SubjectFailed << endl;
        }

        // polymorphism
        void isFinisher(){
            if(getGrade() != 12 || HaveSubFail) {
                cout << getName() << " is not in process for graduation." << endl;
            } else {
                cout << getName() << " is in process for graduation." << endl;
            }
        }

        void introduceStudent(){
            cout << "Name: " << getName() << endl;
            cout << "ID: " << getId() << endl;
            cout << "Grade: " << getGrade() << endl;
            cout << "Section: " << getSection() << endl;
            cout << "Subject Failed: " << SubjectFailed << endl;
        }
        


};


int main(){

    Irreg irreg01 = Irreg(104, "Sirel", 12, "Dracule", "English");
    
    //polymorphism
    Student* s1 = &irreg01;

    //s1->isFinisher();

    
    //s1->introduceStudent();

    cout << &irreg01 << endl;
    cout << &s1 << endl;





    return 0;
}