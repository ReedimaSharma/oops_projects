#include<iostream>
using namespace std;
class Complex {
    int real , imag;
public:
void input() {
    cout<<"Enter real part : ";
    cin>>real;
    cout<<endl;
    cout<<"Enter imaginary part : ";
    cin>>imag;
}
void display() {
    cout<<real;
    if(imag>=0) {
        cout << " + " << imag << "i";
    }
        else {
            cout << " - " << -imag << "i";

    }
    cout<<endl;

}
//addition ke liye member functiom 
Complex add(Complex c) {
    Complex temp;
    temp.real  = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}
//multiplication
Complex multiplication(Complex c) {
    Complex temp;
    temp.real = (real*c.real) - (imag * c.imag);
    temp.imag = (imag*c.real) + (real*c.imag);    //(a+ib) (c+id) = (ac-bd) + (bc+ad)
    return temp;
}
friend Complex subtract(Complex a , Complex b);
};
 Complex subtract(Complex a , Complex b) {
    Complex temp;
    temp.real = a.real - b.real;
    temp.imag = a.imag - b.imag;
    return temp;


}
int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    result = c1.add(c2);
    cout << "\nAddition: ";
    result.display();

    result = subtract(c1, c2);
    cout << "Subtraction: ";
    result.display();

    result = c1.multiplication(c2);
    cout << "Multiplication: ";
    result.display();

    return 0;
}