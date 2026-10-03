#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    int arr[n];
    bool index=false;
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    
    int search;
    cout<<"enter element to search : ";
    cin>>search;
    for(int i = 0; i< n; i++) {
        if(arr[i] == search) {
            search=i;
            index=true;
            break;
     
   
        }
    
    } if (index=true){
    cout<<"element is found at index : "<<search;
        }
        else{

cout<<"element not found"<<endl;}

  


        
    
    return 0;
}