#include<iostream>
using namespace std;
class Distance {
int feet;
int inches;
public: 
Distance(int f = 0 , int i = 0) {
    feet = f;
    inches = i;
}
Distance operator+(Distance d) {
    Distance temp;
    temp.feet = feet + d.feet;
    temp.inches = inches + d.inches;
    if (temp.inches>12) {
temp.feet += temp.inches/12;
temp.inches = temp.inches % 12; 
    }
    return temp;
}
void display() {
    cout<<feet<<"ft"<<inches<<"in"<<endl;
}

};
int main() {
    Distance d1(6,2);
    Distance d2(5,11);
    Distance d3 = d1 + d2;
    d3.display();
}