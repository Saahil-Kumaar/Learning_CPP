#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    void printDetails(){
        cout<<"Name: "<<this->name<<", Salary: $"<<this->salary<<endl;
    }
};
int main(){
    Employee emp1;
    emp1.name="Alpha";
    emp1.salary=100;
    cout<<"Name: "<<emp1.name<<", Salary: $"<<emp1.salary<<endl;
    emp1.printDetails();
    return 0;
}