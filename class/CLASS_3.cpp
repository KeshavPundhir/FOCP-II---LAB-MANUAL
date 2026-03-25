#include<iostream>
using namespace std;

class Employee
{
int empId;
string name;
double monthlySalary;

double calculateAnnualSalary()
{
return (monthlySalary*12);
}

public:
void inputDetails()
{
    cout<<"enter the EMPLOYEE ID : ";
    cin>>empId;

    cout<<"enter the EMPLOYEE NAME : ";
    cin>>name;

    cout<<"enter the SALARY : ";
    cin>>monthlySalary;

}
void displayDetails()
{
cout<<"\nEMPLOYEE ID :  "<<empId<<"\nEMPLOYEE NAME : "<<name<<"\nSALARY : "<<calculateAnnualSalary();

}



};

int main()
{
Employee e;
e.inputDetails();
e.displayDetails();

    return 0;
}

