#include<iostream>
using namespace std;
class Employee {
    string name;
    double salary;
    public: 
    void input() {
      cout<<"Enter name : ";
      cin>>name;
      cout<<"Enter salary : ";
      cin>>salary;  
    }
    void display() {
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
    double getsalary() {
        return salary;
    }
    //increase salary
    friend Employee increaseSalary(Employee e);
    //highest salary 
    friend Employee highestSalary(Employee e[] , int n);

};
Employee highestSalary(Employee e[] , int n) {
    Employee highest = e[0];
    for(int i = 1 ; i<n ; i++) {
if(e[i].salary > highest.salary ) {
    highest = e[i];
}

    }
    return highest;
   
}
Employee increaseSalary(Employee e) {
    e.salary = e.salary + 10.0/100 * e.salary;
    return e; 
}
int main() {
    int n;
    cout<<"Enter number of employees : ";
    cin>>n;
    Employee e[n];
for(int i = 0; i< n ; i++) {
    cout<<"Employee "<<i+1<<endl;
    e[i].input();
}
Employee highest = highestSalary(e, n);

    cout << "Employee with highest salary:"<<endl;;
    highest.display();

    Employee revised = increaseSalary(e[0]);

    cout << "Employee after 10% salary increase:"<<endl;
    revised.display();

    return 0;
}
