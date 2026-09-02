#include<iostream>
using namespace std;
class Rectangle {
    private:
    int length ;
    int breadth;
    public:
    int input(int l, int b) {
        length = l;
        breadth = b;
    }
    
int calculateArea() {
    return length*breadth;
}
void displayArea() {
    cout<<"Length is : "<<length<<endl;
    cout<<"Breadth is : "<<breadth<<endl;
    cout<<"Area is : "<<calculateArea();
}
};
int main() {
Rectangle r;
    r.input(12,32);
    r.calculateArea();
    r.displayArea();

}