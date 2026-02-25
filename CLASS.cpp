#include <iostream>
// #include<string>
using namespace std;
class student
{

    int roll, m1, m2, m3;
    string name;

    int calculatetotal()
    {
        return (m1 + m2 + m3);
    }

public:
    void inputdetails()
    {

        cout << "\n enter roll no, name ,marks 1 , marks 2 ,marks 3 : ";
        cin >> roll >> name >> m1 >> m2 >> m3;
    }

public:
    void displaydetails()
    {
        cout << "\n name :" << name << "\n roll no :" << roll << "\n marks 1: " << m1 << "\n marks 2: " << m2 << "\n marks 3: " << m3;
        cout << "\n total :" << calculatetotal();
    }
};

int main()
{

    student s1;
    s1.inputdetails();
    s1.displaydetails();

    return 0;
}