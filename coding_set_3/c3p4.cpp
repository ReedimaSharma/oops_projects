#include<iostream>
using namespace std;
class BankAcc {
    public:
    int accno;
    double balance;
    void input() {
        cout<<"ENTER ACCOUNT NUMBER : "<<endl;
        cin>>accno;
        cout<<"ENTER BALANCE : "<<endl;
        cin>>balance;
        cout<<endl;

    }
    void transfer(BankAcc &receiver , double amount ) {
        if(balance>= amount) {
            balance = balance - amount;
            receiver.balance = receiver.balance + amount;
            cout<<"TRANSFER SUCCESSFUL "<<endl;
        }
        else {
            cout<<"INSUFFICIENT BALANCE "<<endl;
        }
    }
    void display() {
        cout<<"ACCOUNT NUMBER : "<<accno<<endl;
cout<<"BALANCE : "<<balance<<endl;
    }
};
int main() {
    double amount;
    BankAcc sender , receiver;
    cout<<"Enter details of sender's account : ";
    sender.input();
    cout<<"Entr detials os receiver's details : ";
    receiver.input();
cout<<"Enter the amount to be transferred : ";
cin>>amount;
    sender.transfer(receiver , amount );
    cout<<"After transfer : ";
    sender.display();
     cout<<"After transfer : ";
    receiver.display();

}