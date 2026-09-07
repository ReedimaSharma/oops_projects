#include<iostream>
#include<string>
using namespace std;
class Student{
private:
string name;
int rollNo;
int marks[5];
public:
Student() {

cout<<"Enter name of the student : "<<"  ";
cin>>name;

cout<<"Enter roll number of the student : "<<"  ";
cin>>rollNo;

cout<<"Enter marks of the student : "<<"  ";
for(int i = 0; i<5; i++) {
cin>>marks[i];
}

}
int totalmarks() {
    int total = 0;
    for(int i = 0; i<5; i++) {
        total = total + marks[i];
    } 
    cout<<"The total marks are : "<<total<<endl;
}
float calculatePercentage() {
    
    float percentage = (totalmarks() / 500.0) * 100;
    cout<<"percentage is : "<<percentage<<endl;
}
char determineGrade() {
    float percentage = calculatePercentage();
    if(percentage>=90) {
        cout<<"A grade";
    }
    else if(percentage<90 && percentage>=75) {
        cout<<"B grade";
    }
     else if(percentage<75 && percentage>=60) {
        cout<<"C grade";
    }
 else if(percentage<60 && percentage>=49) {
        cout<<"D grade";
    }
    else {
        cout<<"F grade";
    }
}
void displayResult() {
    cout<<"STUDENT RESULT : "<<endl;
    cout<<" NAME : "<<name<<endl;
    cout<<"ROLL NUMBER : "<<rollNo<<endl;
    cout<<"TOTAL MARKS  : "<<totalmarks()<<endl;
    cout<<"PERCENTAGE  : "<<calculatePercentage()<<endl;
    cout<<"GRADE  : "<<determineGrade()<<endl;
}

};
int main() {
    Student s;
    s.displayResult();
    return 0;
}