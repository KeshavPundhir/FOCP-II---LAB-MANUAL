#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "\n Animals eat other animals !" << endl;
    }
};

class Dog
{
public:
    void bark()
    {
        cout << "\n Dog barks on ghosts at night !" << endl;
    }
};

class Puppy : public Animal, public Dog
{
public:
    void weep()
    {
        eat();
        bark();
        cout << "\n weeping of puppies means ther are discomforted !" << endl;
    }
};

int main()
{
    Puppy p;

    p.weep();

    return 0;
}
