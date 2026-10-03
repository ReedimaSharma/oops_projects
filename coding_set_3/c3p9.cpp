#include<iostream>
using namespace std;
class Product {
    string productname;
    float price;
    int quantity;
    void input() {
        cout<<"Enter product name : ";
        cin>>productname;
        cout<<"Enter price of the product : ";
        cin>>price;
        cout<<"Enter quantity of product : ";
        cin>>quantity;
    }
    void display() {
        cout<<"Product name is : "<<productname<<endl;
        cout<<"Product price is : "<<price<<endl;
        cout<<"Quantity of product is : "<<quantity<<endl;
    }
    float totalValue() {
        return price*quantity;
    }
    Product combine(Product p2) {
        Product p3;
        p3.quantity = quantity + p2.quantity;
        p3.productname = productname + p2.productname;
        return p3;

    }
    friend Product Total(Product p1 , Product p2);
};
Product Total(Product p1 , Product p2) {
    if(p1.totalValue()>p2.totalValue()) {
        return p1;
    }
    else {
        return p2;
    }

}
int main() {
    Product p1,p2,p3,p4;
    p1.input();
    p2.input();
   p3 =  Total(p1,p2);
   p3.display();
   p4  = p1.combine(p2);
   cout<<"Combined : ";
   p4.display();
}
