#include<iostream>
#include<fstream>
using namespace std;
int main() {
    int rno;
    string name;
    double marks;
    cout<<"Enter your roll number : ";
    cin>>rno;
    cout<<endl;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<endl;
    cout<<"Enter your marks : ";
    cin>>marks;
    cout<<endl;
    ofstream file("student.txt");
    if(!file) {
        cout<<"File does not exist . ";
        return 1;
    }
file<<rno<<"   "<<name<<"   "<<marks<<endl;
file.close();
cout<<"Data entered successfully !! "<<endl;

}