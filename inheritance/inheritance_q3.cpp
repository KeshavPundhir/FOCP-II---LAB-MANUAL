#include<iostream>
using namespace std;

class Academic
{
public:

void marks()
{
    cout<<"MARKS"<<endl;
}

};

class Sports
{
public:

void score()
{
    cout<<"SCORE"<<endl;
}

};


class Result: public Academic, public Sports
{
public:

void display()
{

    marks();
    score();

}


};


int main()
{

Result r;

r.display();

return 0;

}

