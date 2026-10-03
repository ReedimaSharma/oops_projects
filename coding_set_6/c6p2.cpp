#include<iostream>
#include<cmath>
using namespace std;

  class NegativeNumberException {
    public:
    const char*message() {
        return "Square root of a negative number can not be defined .";
    }
  };
  int main() {
    double x ;
    cout<<"Enter an integer : ";
    cin>>x;
    try {
        if(x<0) {
            throw NegativeNumberException();
        }
        cout<<"Square root : "<<sqrt(x)<<endl;
    }
    catch(NegativeNumberException &e) {
        cout<<"Error :  "<<e.message()<<endl;
    }
    return 0;
  }

