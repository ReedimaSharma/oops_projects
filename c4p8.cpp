#include<iostream>
using namespace std;
Class B;
class A {
    private:
    int a;
    public:
    A() {
        a = 10;
    }
    friend void sum(A,B);
};
class B  {
    private:
    int b;
    public: 
    B() {
        b = 15;
    }
    friend void sum (A,B);
};
void sum (A obj1 , B obj2) {
    cout<<"Sum = "<<obj1.a+obj2.b;
}
int main() {
    A obj1;
    B obj2;
    sum(obj1,obj2);
    return 0;
}