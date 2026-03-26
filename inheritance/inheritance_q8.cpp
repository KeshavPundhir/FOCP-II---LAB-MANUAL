#include<iostream>
using namespace std;

class Employee
{
string name ;
float salary;

public:
void data(string n,float s)
{
name = n;
salary = s;

}

void output()
{
    
    cout<<"NAME : "<<name<<endl<<"SALARY : "<<salary<<endl;

}

};

class Developer:public Employee
{
public:

void displayRole()
{
 output();
cout<<"ROLE: DEVELOPER "<<endl;

}

};


class Designer: public Employee
{
public :

void displayRole()
{
 output();
cout<<"ROLE: DESIGNER "<<endl;

}

};


int main()
{

Developer e;
e.data("raju", 5000);
e.displayRole();

cout<<endl;

Designer e1;
e1.data("maju",5001);
e1.displayRole();

    return 0;
}

