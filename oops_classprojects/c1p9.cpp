#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++) {
      cin>>arr[i];  
    } 
    int min = arr[0];
    for(int i = 0; i<n;i++) {
        if(arr[0] < min) {
            min = arr[i];
        }
    }
    cout<<"minimum element is : "<<min;
    return 0;
}