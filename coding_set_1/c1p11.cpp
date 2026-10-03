#include<iostream>
using namespace std;
int main() {
    int n , x , count = 0;
    cout<<"enter number of elements : ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i< n; i++) {
        cin>>arr[i];
    }
    cout<<"enter element whose occurence is to be count  : ";
    cin>>x;
    for(int i = 0; i<n; i++) {
        if(arr[i] == x) {
            count++;
        }
    }
    cout<<"occurences : "<<count;

return 0;

}