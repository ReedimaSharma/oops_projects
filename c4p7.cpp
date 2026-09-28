#include<iostream>
using namespace std;
class Number {
    int a;
    int b;
    public:
    void input() {
        cout<<"Enter first number : "<<endl;
        cin>>a;
        cout<<"Enter second number : "<<endl;
        cin>>b;
    }
    friend void greatestno(Number n);
};
 void greatestno(Number n) {
    if(n.a>n.b) {
        cout<<n.a<<" is the greatest number"<<endl;
    }
    else {
         cout<<n.b<<" is the greatest number"<<endl;
    }
 }
 int main() {
    Number n;
    n.input();
    greatestno(n);
 }