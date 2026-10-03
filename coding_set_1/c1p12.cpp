#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter array elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i = 0; i<n ; i++) {
        cin>>arr[i];
    }
    int largest = arr[0];
    int second = arr[0];
    for(int i =1; i<n; i++) {
        if(arr[i] > largest) {
            second = largest; ///purana vala largest
            largest = arr[i]; //nya vala largest
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    cout<<"Second largest element in array is : "<<second;
}