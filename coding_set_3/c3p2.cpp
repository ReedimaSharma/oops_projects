#include<iostream>
using namespace std;
class Student {
    public: 
    int rollNo;
    float marks;
    Student (int r , float m) {
        rollNo = r;
        marks = m;
    }
float getmarks() {
   return marks;
}
void display() {
    cout<<"ROLL NUMBER : "<<rollNo<<endl;
    cout<<"MARKS : "<<marks<<endl;
}
} ;
Student findTopStudent(Student s1 , Student s2 ) {
if(s1.getmarks() > s2.getmarks()) {
    return s1;
}
else {
    return s2;
}
}
int main() {
    Student student1(19, 98);
    Student student2(20, 90);
cout<<"STUDENT DETAILS ARE : "<<endl;
student1.display();
student2.display();
Student topStudent = findTopStudent(student1 , student2 );
cout<<"TOP STUDENT : "<<endl;
topStudent.display();
}