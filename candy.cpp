#include <iostream>
using namespace std;
class candy
{
    string color;
    int points;

public:
    void setcandy(string, int);
    void displaycandy();
    candy();
    candy(string cc);
    candy(string cc, int nn);

    void loose_candy();
    void loose_candy(int);
    void gain_candy();
    void gain_candy(int);
};

void candy::loose_candy()
{
    points -= 3;
}

void candy::loose_candy(int a)
{
    points -= a;
}

void candy::gain_candy()
{
    points += 3;
}

void candy::gain_candy(int b)
{
    points += b;
}

candy::candy()
{
    color = "black";
    points = 0;
}

candy::candy(string cc)
{
    color = cc;
    points = 0;
}

candy::candy(string cc, int nn)
{
    color = cc;
    points = nn;
}

void candy::setcandy(string c, int p)
{
    color = c;
    points = p;
}

void candy::displaycandy()
{
    cout << "\n COLOR : " << color;
    cout << "\n POINTS : " << points;
    cout << "\n";
}

int main()
{

    // candy c1("green"), c2("maroon", 77); // we are initialize
    candy c1, c2;
    c1.setcandy("red", 31); // here we are updating the calues so if they are emable these values will be considered
    c2.setcandy("blululu", 3001);
    c1.displaycandy();
    c2.displaycandy();
    c1.loose_candy();
    c2.loose_candy(5);
    c1.displaycandy();
    c2.displaycandy();
    c1.gain_candy();
    c2.gain_candy(5);
    c1.displaycandy();
    c2.displaycandy();

    return 0;
}
