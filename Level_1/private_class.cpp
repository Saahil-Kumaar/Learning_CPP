#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    Employee(string n, int s,int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPass=sp;
    }
    void getSecretPass(){
        cout<<"Pass key: "<<this->secretPass;
    }
private:
    int secretPass;

};
int main()
{
    Employee emp1("Alpha", 100,12345678);
    cout << "Name: " << emp1.name << ", Salary: $" << emp1.salary << endl;
    emp1.getSecretPass();
    return 0;
}