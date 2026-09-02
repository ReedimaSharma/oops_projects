#include<iostream>
using namespace std;
class Number{
    private:
    int num;
    bool even = true;
    public:
    int input(int n) {
        num = n;
    }
    void isEven() {
        if(num % 2== 0) {
             even = true;
        }
        else {
            even = false;
        }
    }
    void displayResult() {
        if(even == true) {
            cout<<"Number is even ";
        }
        else {
            cout<<"Number is false ";
        }
    }
};
int main() {
    Number n;
    n.input(8);
    n.isEven();
    n.displayResult();
}