#include<iostream>
#include<string>
using namespace std;
class BankAccount {
    private : 
    string accountNumber;
    float balance;
    public: 
    BankAccount(string an , float b) {
accountNumber = an;
balance = b;
    }
    void deposit(float amount) {
        if(amount > 0) 
        balance = amount + balance;
    cout<<"Deposited amount is : "<<amount<<endl;
    }
    void withdraw(float amount) {
        if(amount> 0 && balance> amount) {
            balance = balance - amount;
            cout<<"Withdrawl of : "<<amount;
        }
        else {
            cout<<"Entered amount is not valid ";
        }
    }
    void display() {
        cout<<"Account : "<<accountNumber<<"   "<<"Balance : "<<balance<<"    "<<endl;
    }
};
int main() {

BankAccount B1("12345" , 5000);
        B1.display();
        B1.deposit(500);
        B1.withdraw(200);
}