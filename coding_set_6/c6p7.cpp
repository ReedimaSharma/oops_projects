#include<iostream>
using namespace std;
int main() {
    cout<<"CACULATOR "<<endl;
    int a,b;
    cout<<"Enter two integers : ";
    cin>>a>>b;
    char op;
    cout<<"Enter an operator";
    cin>>op;
    try {
        if(op!= '+' && op!= '-'&& op!= '*'&& op!= '/' ) {
            throw'X';
        }
        switch(op) {
            case '+':
            cout<<"Result : "<<a+b<<endl;
            break;
            case '-':
            cout<<"Result : "<<a-b<<endl;
            break;
            case '*':
            cout<<"Result : "<<a*b<<endl;
            break;
            case '/':
            if(b==0) {
                throw 0;
            }
            cout<<"Result : "<<a/b<<endl;
            break;
        
        }
    }
    catch(int) {
        cout<<"Error ! Division by zero is not possible .";
    }
    catch(char) {
        cout<<"Invalid operator";
    }

}