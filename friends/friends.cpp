#include<iostream>
using namespace std;

class rectangle
{
int length;
int width;

public:

rectangle()
{
    length =0; 
    width =0;
}

rectangle (int l,int w)
{

length = l;
width = w;

}

void display ()
{
    cout<<"length = "<<length<<endl;
    cout<<"width = "<<width<<endl;
}

friend void area(rectangle obj); // friend is not he member of inheritance but a guest who can access some methods

};


void area(rectangle obj)
{
cout<<"\narea = "<<obj.length*obj.width<<endl;

}

int main()
{
rectangle r1,r2(2,3);


r1.display();
cout<<endl;
r2.display();

area(r2);


    return 0;
}
