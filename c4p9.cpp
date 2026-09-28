#include<iostream>
using namespace std;
class Interest{
    int principal;
    int rate;
    int interest;
    public:
    Interest(int p,int r,int i){
        principal=p;
        rate=r;
        interest=i;
    }
    inline void calculate_si(){
        cout<<"Simple interest  is "<<(principal*rate*interest)/100;
    }
    
};
int main(){
    Interest I (100,5,2);
    I.calculate_si();
}