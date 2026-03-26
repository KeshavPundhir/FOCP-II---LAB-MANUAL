#include<iostream>
using namespace std;

class space
{
protected:
    float l,w,r;
public:

void draw(float ln,float wi,float radi)
{
l = ln;
w = wi;
r = radi;
}

};



class Circle:public space
{
public:

void area() 
{
    
cout<<"area of circle is : "<<3.14*(r*r)<<endl;
}

};



class Rectangle: public space
{
public:

void area()
{
 cout<<"area of rectangle is : "<<l*w<<endl;
}

};

int main()
{


Circle c;

c.draw(0,0,2);
c.area();

Rectangle r;

r.draw(2,2,0);
r.area();



    return 0;
}

