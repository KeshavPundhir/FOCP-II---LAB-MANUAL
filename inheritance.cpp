#include<iostream>
using namespace std;

class person
{
int age;
string name;

public :
person()
{
    cout<<"\n person defolt constructor "; name="defolt"; age=18;
}
person(string nm,int ag)
{
    cout<<"\n person perameter constructor "; name=nm; age=ag;
}

void display()
{
    cout <<"\n name=  "<<name<<"\n age= "<<age;
}

};

class student : public person
{

string rollno;
public:

student()
{
    cout<<"\n student defolt constructor "; rollno="25csu000";
}

student(string nm,int ag,string rno): person(nm,ag)
{
    cout<<"\n person perameter constructor "; rollno= rno;
}

void display_student()
{
    display();
    cout<<"\n rollno= "<<rollno;
}


};



int main()
{
student p1,p2("abcd",23,"25csu111");

p1.display();
p1.display_student();
p2.display_student();

    return 0 ;
}