#include<iostream>
using namespace std;


class shape
{

public:

void d()
{
cout<<"\nMAZZE HE MAZZE ";

}
void e(int l,int w)
{

    cout<<"\nEXTRA MAZZE ";
}

};


class square :public shape
{

int length;
int side;
public:

void d()//overriding
{
    cout<<"\nMAZZE HE MAZZE PART 2 ";
}


void e(int l)// overriding
{
    length=l;
    cout<<"\nEXTRA MAZZE ";
}

void display()
{
    cout<<"\narea is : "<<length*length;
}

};

int main()
{
shape s1;
square ss,ss1;


s1.d();
ss.shape::d(); // isse shape walla print ho jayega
ss.d();


    return 0;
}
