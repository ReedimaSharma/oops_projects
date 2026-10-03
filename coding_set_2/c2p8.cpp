#include<iostream>
using namespace std;
class Marks {
    private:
    int arr[5];
    public:
    Marks () {
        cout<<"Enter marks of five students : "<<endl;
        for(int i =0 ; i<5 ; i++) {
            cin>>arr[i];
        }
    }
int Highestmarks() {
    int highest = arr[0];
    for(int i = 0; i<5 ; i++) {
        if(arr[i] > highest ) {
            highest = arr[i];
        }
    }
    return highest;
}
void DisplayResult() {
    int highest = Highestmarks();
cout<<"Highest marks is : "<<highest;
}

};
int main() {
    Marks M1;
    M1.DisplayResult();
}