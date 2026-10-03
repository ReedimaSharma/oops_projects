#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number : ";
    cin>>n;
    int temp = n;
    int r = 0;
    while(n!=0) {
        int ld = n % 10;
        r = r*10;
        r = r + ld;
        n = n/10;
    }
   if(r==temp) {
        cout<<"the number is palindrome";
    }
    else {
        cout<<"the number is not palindrome";
    }
    return 0;
}