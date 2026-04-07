#include <iostream>
using namespace std;
class A
{

    int a;

public:
    A()
    {
        cout << "A constructor called \n ";
        a = 100;
    }

    void display_A()
    {
        cout << "value of a : " << a << endl;
    }

    ~A()
    {
        cout << "A destructor called " << endl;
    }
};

class B : virtual public A
{

    int b;

public:
    B()
    {
        cout << "B constructor called \n ";
        b = 219;
    }

    void display_B()
    {

        cout << "value of b : " << b << endl;
    }

    ~B()
    {
        cout << "B destructor called" << endl;
    }
};

class C : virtual public A
{

    int c;

public:
    C()
    {
        cout << "C constructor called \n ";
        c = 350;
    }

    void display_C()
    {

        cout << "value of c : " << c << endl;
    }

    ~C()
    {
        cout << "C destructor called" << endl;
    }
};

class D : public B, public C
{

    int d;

public:
    D()
    {
        cout << "D constructor called \n ";
        d = 500;
    }

    void display_D()
    {
        display_A();
        display_B();
        display_C();
        cout << "value of d : " << d << endl;
    }

    ~D()
    {
        cout << "D destructor called" << endl;
    }
};

int main()
{

    D X;

    X.display_D();

    return 0;
}