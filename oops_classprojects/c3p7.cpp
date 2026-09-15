#include<iostream>
using namespace std;
class Rectangle {
    public: 
    int length;
    int width;
    void input() {
        cout<<"Enter length : ";
        cin>>length;
        cout<<"Enter width : ";
        cin>>width;
    }
    void display() {
        cout<<" Length is : "<<length<<endl;
        cout<<"Width is : "<<width<<endl;
    }
    Rectangle check(Rectangle r) {
        if(r.length*r.width == length*width ) {
            cout<<"Equal area  ";
        }
        else {
            cout<<"Unequal area";
        }
    }
friend Rectangle newRect(Rectangle r1,Rectangle r2);
};
Rectangle newRect(Rectangle r1,Rectangle r2) {
    Rectangle r3;
    r3.length = r1.length+r2.length;
    r3.width = r1.width + r2.width;
    return r3;
}

int main() {
    Rectangle r1;
    r1.input();
    r1.display();
    Rectangle r2;
    r2.input();
    r2.display();
    cout<<endl;
    cout<<"Comparing the areas of rectangle ";
    cout<<endl;
    r1.check(r2);
    cout<<endl;
    Rectangle r3 = newRect(r1, r2);
    cout<<endl;
    cout<<"Dimensions of new rectangle is:"<<endl;
    r3.display();
}