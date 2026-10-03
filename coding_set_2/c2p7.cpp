#include<iostream>
#include<string>
using namespace std;
class Employee {
    private:
    string employeeName;
    float basicSalary;
    public: 
    Employee(string name, float salary) {
     employeeName = name;
     basicSalary = salary;

    }
    float calculateHRA() {
        return 0.2*basicSalary;
    }
    float calculateDA() {
        return 0.1*basicSalary;
    }
    void display() {
        float HRA = calculateHRA();
        float DA = calculateDA();
        float gross_salary = basicSalary + HRA + DA;
        cout<<gross_salary;
    }

};
int main() {
    Employee e("Reedima ", 45000);
    e.calculateHRA();
    e.calculateDA();
    e.display();
}