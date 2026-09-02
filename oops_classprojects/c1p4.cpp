#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter number : ";
    cin>>n;
    int r = 0;
    while(n!=0) {
        int ld = n% 10;
        r = r*10;
        r = r + ld;
        n = n/10
    }
    cout<<"the reverse of the number is : "<<r;
}