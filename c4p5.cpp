#include<iostream>
using namespace std;
class Student {
    static int count;
    public: 
    Student() {
count++ ;
cout<<"Student created : "<<endl;
    }
    static void displaycount() {
        cout<<"Total number of students : "<<count<<endl;
    }
};
int Student::count = 0;
int main() {
    Student s1;
    Student s2;
    Student s3;
    Student::displaycount();
}