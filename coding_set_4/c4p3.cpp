#include<iostream>
using namespace std;
class Complex {
    int real;
    int imag;
    public: 
    Complex (int r , int i) {
        real = r;
        imag = i;
    }
    //overloading operator +  
    Complex operator+(Complex c) {
        Complex temp (0,0);
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display() {
        cout<<real <<" + "<<imag<<" i "<<endl;
    }
};
int main() {
    Complex c1(3,5);
    Complex c2(4,6);
    Complex c3 = c1 + c2;
    cout<<"Sum is : ";
    c3.display();
}