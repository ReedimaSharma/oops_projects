#include<iostream>
using namespace std;
class Number {
    public:
    int n; 
    Number(int value) {
 n = value;
    
    }
};
int add(Number obj1 , Number obj2 ) {
    return obj1.n + obj2.n;
}
int main() {
    int value1;
    int value2;
    cout<<"Enter first number : "<<endl;
    cin>>value1;
    cout<<"Enter second number : "<<endl;
    cin>>value2;
    Number n1(value1);
    Number n2(value2);
    int result = add(n1,n2);
    cout<<"The sum is : "<<result<<endl;
}  