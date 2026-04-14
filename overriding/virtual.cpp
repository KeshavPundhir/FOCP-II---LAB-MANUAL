#include <iostream>
using namespace std;

class shape
{

public:
    shape()
    {
        cout << "\n shape default const";
    }
    virtual void area()//=0;//  =0 ke baad iss method ke obj nahi ban sakte 
    {
        cout << "\n no area do dim";
    }
    virtual void display()
    {
        cout << "\n we are 2 d shapes";
    }
};

class rectangle : public shape
{
public:
    int length;
    int width;
    rectangle(int l = 5, int w = 10) : length(l), width(w)
    {
        cout << "\n rectangle object created";
    }

    void area()
    {
        cout << "\n area = " << length * width;
    }
};

int main()
{
    shape *s1, s2;
    rectangle r2(20, 40);
    
    s1 = &s2;
    s1->area();
    r2.area();
    s1 = &r2;
    s2 = r2;
 
    s1->area();
    s2.area();
    return 0;
}
