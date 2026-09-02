#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i =2 ; i<= n/2 ; i++) {
        if(n%2 == 0) {
            cout<<n<<" is not a prime number";
            break;
        }
        else {
            cout<<n<<" is a prime number";
            break;
        }
    }
    return 0;
}