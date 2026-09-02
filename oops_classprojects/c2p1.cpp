#include<iostream>
using namespace std;
class Student {
    private: 
    string name;
    int rollNo;
    public:
    void setData(string n , int r) {
        name = n;
        rollNo = r;
    }
    void displayData() {
        cout<<"Enter details : "<<endl;
        cout<<"Your name is : "<<name<<endl;
        cout<<"Enter your roll no. "<<rollNo<<endl;
    }
};
int main() {
    Student s;
    s.setData("Reedima" , 19);
    s.displayData();
}
