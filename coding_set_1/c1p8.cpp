#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements : ";
    for(int i=0;i<n;i++) {
        cin>>
        arr[i];
    }
    int max = arr[0];
    for(int i = 0; i<n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout<<"maximum element is : "<<max;
    return 0;
}