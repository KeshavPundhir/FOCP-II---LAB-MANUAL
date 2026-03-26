#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;

public:
    void namee(string nm)
    {
        name = nm;
    }
};

class Department
{

protected:
    string department;

public:
    void departmentname(string dep)
    {
        department = dep;
    }
};

class Manager : public Employee, public Department
{
public:
    void display()
    {

        cout << "\n Employee name : " << name << endl;
        cout << " Department : " << department << endl;
    }
};

int main()
{
    Manager m;

    m.namee("karan");
    m.departmentname("NCU");

    m.display();

    return 0;
}
