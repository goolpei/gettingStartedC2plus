#include <iostream>
using namespace std;

class Book{
public:
    string Title;
    string Author;
    
    Book(string title, string author){
        Title = title;
        Author = author;
        cout << "Book object created." << endl;
    }
    ~Book(){
        cout << "Book object destroyed." << endl;
    }
    void display(){
        cout << "Title: " << Title << endl;
        cout << "Author: " << Author << endl;
    }
};

int main(){
    Book b1 = Book("The Humogous", "Lateralus");
    b1.display();
    return 0;
}