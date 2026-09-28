#include<iostream>
#include<string>
using namespace std;
class BankAccount {
    int Accno;
    string customer_name;
    static int totalacc;
    public:
     void input() {
        cout<<"Enter your account number "<<endl;
        cin>>Accno;
        cout<<"Enter customer name"<<endl;
        cin>>customer_name;
        totalacc++;

    }

    void display() {
        cout<<"Account number is : "<<Accno<<endl;
        cout<<"Customer name is : "<<customer_name<<endl;
        cout<<totalacc<<" accounts have been created  "<<endl;
    }

};
int BankAccount::totalacc=0;
int main() {
    BankAccount b1;
    b1.input();
    b1.display();
    BankAccount b2;
    b2.input();
    b2.display();
}