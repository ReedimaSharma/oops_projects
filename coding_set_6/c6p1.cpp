#include<iostream>
using namespace std;
int main() {
    int a , b;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    try {
        if(b==0) {
            throw b ;
        }
        cout<<"Result : "<<a/b<<endl;
    }
    catch(int ) {
        cout<<"Error : Division by 0 is not allowed . "<<endl;
    }
}