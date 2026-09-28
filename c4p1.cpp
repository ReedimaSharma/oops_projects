#include<iostream>
using namespace std;
class Area {
    publics
    void calculate(int side) {
        cout<<"Area of square is : "<<side*side<<endl;
    }
    void calculate(int length , int breadth) {
        cout<<"Area of rectangle is : "<< length*breadth<<endl;
    }
    void calculate(double radius) {
        cout<<"Area of circle is : "<<3.14*radius*radius<<endl;
    }

};
int main() {
    Area a;
    a.calculate(5); //square
    a.calculate(4,8); //rectangle
    a.calculate(5.2); //circle
}