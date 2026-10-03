#include<iostream>
using namespace std;
int main() {
    int age;
    cout<<"Enter age of the candidate : ";
    cin>>age;
    try {
        if(age<18) {
            throw"Not eligible to vote . ";
        }
        cout<<"Your vote is registered. ";
    }
    catch(const char*s) {
        cout<<"Error! "<<s<<endl;
    }
}