#include<iostream>
using namespace std;
class Book {
    private:
    string title;
    string author;
    public:
    Book(string t , string a) {
        title = t;
        author = a;
    }
    void displayData() {
        cout<<"Enter name of the book : "<<title<<endl;
        cout<<"Enter nae of the author : "<<author<<endl;
    }

    };
    int main() {
        Book b("Let us C ", "Jaswant ");
        b.displayData();
    }
