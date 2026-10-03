#include<iostream>
using namespace std;
int main() {
    int arr[10];
    cout<<"Enter 10 elements : ";
    for(int i=0 ; i<=9;i++) {
        cin>>arr[i];
    }
    int index;
    cout<<"Enter index : ";
    cin>>index;
    try {
     if (index<0 || index>9) {
        throw"Invalid index !!";
     }
     cout<<"The element at "<<index<<"index is : "<<arr[index]<<endl;

    }
    catch(const char*s) {
    cout<<"Error ~ "<<s<<endl;
    }
}