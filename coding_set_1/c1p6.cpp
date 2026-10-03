#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int sum = 0;
    int digit;
    while(n!=0) {
        digit = n % 10;
        sum = sum + digit;
        n = n/10;
    }
    cout<<"the sum of the digits is : "<<sum;
    return 0;
}
