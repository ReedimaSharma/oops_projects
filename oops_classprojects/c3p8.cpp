#include<iostream>
#include<string>
using namespace std;
class Book {
    int bookId;
    string BookName;
    int copies;
    public:
    void input() {
        cout<<"Enter book id : ";
        cin>>bookId;
        cout<<"Enter name of the book : ";
        cin>>BookName;
        cout<<"Enter number of copies : ";
        cin>>copies;
    }
    void display() {
        cout<<"Book id is : "<<bookId<<endl;
        cout<<"Book name is : "<<BookName<<endl;
        cout<<"Number of copies : "<<copies<<endl;
    }
    void exchange(Book &other) {
        swap(bookId , other.bookId);
        swap(BookName, other.BookName);
        swap(copies , other.copies);
    }
    friend Book copyCount(Book b1 , Book b2);
};
Book copyCount(Book b1 , Book b2) {
     if(b1.copies>b2.copies){
        cout<<"book 1 have more copies"<<endl;
    }
    else{
        cout<<"book 2 have more copies"<<endl;
    }
    return b1;
}
int main() {
    Book b1;
    cout<<"Enter detials of book 1 : "<<endl;
    b1.input();
    cout<<" detials of book 1 are : "<<endl;
    b1.display();
    Book b2;
    cout<<"Enter detials of book 2 : "<<endl;
    b2.input();
    cout<<" detials of book 2 are : "<<endl;
    b2.display();
    cout<<endl;
    cout<<" detials of book 1 after exchange are : "<<endl;
    b1.exchange(b2);
    b1.display();
    cout<<endl;
    cout<<" detials of book 2 after exchange are : "<<endl;
b2.display();
cout<<"It is found that"<<endl;
    Book b3=copyCount(b1,b2);


}