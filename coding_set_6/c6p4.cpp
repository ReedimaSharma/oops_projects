#include<iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter marks of the student : ";
    cin>>marks;
    try {
        if(marks<0 || marks>100) {
            throw"Marks cannot be less than 0 and more than 100. ";
        }
        cout<<"Marks : "<<marks<<endl;
    }
    catch(const char*s) {
        cout<<"Invalid : "<<s<<endl;

    }
}