#include <iostream>
using namespace std;

class Device
{
public:
    void powerOn()
    {
        cout << "\n power is on " << endl;
    }
};

class Computer : public Device
{
public:
    void process()
    {
        cout << "\n Computer is processing data" << endl;
    }
};

class Laptop : public Computer
{
public:
    void carry()
    {
        cout << "\n Laptop is on and can be carried" << endl;
    }
};

int main()
{

    Laptop obj;

    obj.powerOn();
    obj.process();
    obj.carry();

    return 0;
}
