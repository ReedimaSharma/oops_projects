#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"enter c : ";
    cin>>c;
    if(a>b && a > c) {
        cout<<a<<" is the largest number";
    }
    else if(b>a && b>c) {
        cout<<b<<" is the largest number";
    }
    else if (c>a && c>b) {
        cout<<c<<" is the largest number";
    }
    else {
        cout<<"all numbers are equal";
    }
    return 0;
}
