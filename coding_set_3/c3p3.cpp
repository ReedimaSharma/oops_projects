#include<iostream>
using namespace std;
class Distance {
    public:
    int feet;
    int inches;
    public:
    Distance(int f = 0 , int i = 0) {
        feet = f;
        inches = i;
        normalize();
    }
    void normalize() {
        if(inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
            
        }
    }
    Distance add(Distance d1) {
        Distance total;
        total.feet = this->feet + d1.feet;
         total.inches = this->inches + d1.inches;
         total.normalize();
         return total; 
    }
    void display() {
    cout<<"feet : "<<feet<<endl;
    cout<<"inches : "<<inches<<endl;
}
};
int main() {
    Distance d(5,8);
    Distance s(4,9);
    cout<<"Distnace 1 : ";
    d.display();
    cout<<"Distance 2 : ";
    s.display();
    Distance totaldistance = d.add(s);
    cout<<"          "<<endl;
    cout<<"Total distance : ";
    totaldistance.display();
    return 0;
}
