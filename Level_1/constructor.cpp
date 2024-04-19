#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    Employee(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }
};
int main()
{
    Employee emp1("Alpha", 100);
    cout << "Name: " << emp1.name << ", Salary: $" << emp1.salary << endl;
    return 0;
}