#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a == b && b == c && c == a)
    {
        cout << "It is a equilateral triangle";
    }

    else if (a == b && a != c || a == c && a != b || b == c && b != a)
    {
        cout << "It is a isosceles triangle";
    }

    else if (a != b && b != c && c != a)
    {
        cout << "It is a scalene triangle";
    }

    return 0;
}