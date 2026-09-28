#include<iostream>
using namespace std;
class Maximum {
    public:
    void max(int a , int b) {
        if(a>b) {
            cout<<"the maximum number is : "<<a<<endl;
        }
        else {
          cout<<"the maximum number is : "<< b <<endl;  
        }
    }
    void max(int a , int b , int c) {
        if(a>b && a>c) {
            cout<<"the maximum number is : "<<a<<endl;
        }
        else if(b>a && b>c) {
            cout<<"the maximum number is : "<< b <<endl; 
        }
        else {
            cout<<"the maximum number is : "<<c<<endl; 
        }
    }
    void max(double a , double b) {
       if(a>b) {
            cout<<"the maximum number is : "<<a<<endl;
        }
        else {
          cout<<"the maximum number is : "<<b<<endl;  
        } 
    }
};
int main() {
    Maximum m;
    m.max(5,6);
    m.max(4,7,6);
    m.max(2.3,3.2);
}