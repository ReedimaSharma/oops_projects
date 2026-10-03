#include<iostream>
using namespace std;
class BankAccount {
    double balance;
    public:
    BankAccount(double b) {
        balance = b;
    }
    void withdraw(double amount) {
        if(amount>balance) {
        throw "Insufficient Balance";
        }
        balance = balance - amount;
        cout<<"Withdrawal successful."<<endl;
        cout<<"Remaining balance : "<<balance<<endl;
    }

};
int main() {
    double balance , amount;
    cout<<"Enter balance : ";
    cin>>balance;
    cout<<"Enter amount : ";
    cin>>amount;
    BankAccount a(balance) ;
    try {
        a.withdraw(amount);
    }
    catch(const char*s) {
        cout<<"Error : "<<s<<endl;
    }
}