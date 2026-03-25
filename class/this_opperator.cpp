#include<iostream>
using namespace std;

class a
{
int a1;
int a2;
int a3;
public:
a()
{
    a1=0;
    a2=0;
}

a(int a1, int a2,int a3)
{

   (*this).a1=a1; //this allow same names veriables to get there values 
    this->a2=a2;  // another way to write (*this) 
    a3=a3;        // this show garbage value 
}


void display()
{
    cout<< "\n a1 is : "<< a1<< "\n a2 is : "<<a2<<"\n a3 is : "<<a3;
}


};


int main ()
{
a obj,obj1(21,22,55);

obj.display();
obj1.display();

    return 0;
}


