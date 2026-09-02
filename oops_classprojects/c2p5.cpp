#include<iostream>
using namespace std;
int sum = 0;
class ArraySum {
    private : 
    int arr[10];
    public : 
    ArraySum() {
        cout<<"Enter array elements : ";
        for(int i = 0 ; i<10 ; i++) {
            cin>>arr[i];
        }
    }
    int findSum() {
for(int i = 0 ; i<10; i++) {
    sum = sum + arr[i];
}
cout<<"Sum is : "<<sum;
    }
};
int main() {
    ArraySum s;
    s.findSum();

}