#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, formula;
    double r, root1, root2;

cout<<"Enter the values to find the roots\n";

    cin >> a;
    cin >> b;
    cin >> c;

    if (a == 0 || b == 0 || c == 0)
    {
        cout << "not a quadratic equation";
        return 0;
    }

    r = ((b * b) - 4 * a * c);

    if (r > 0)
    {
        root1 = (-b + sqrt(r)) / (2 * a);
        root2 = (-b - sqrt(r)) / (2 * a);

        cout << "two roots are :\n";
        cout << "\nroot 1 : " << root1;
        cout << "\nroot 2 : " << root2;
    }

    else if (r == 0)
    {
        root1 = -b / (2 * a);

        cout << "Equal roots:\n";
        cout << "root is : " << root1;
    }

    else
    {
    // this is what i thought but    worng 

    //   root1 = (-b/ (2 * a)) + ((sqrt(-r))) / (2 * a);
    //     root2 = (-b/ (2 * a)) - ((sqrt(-r))) / (2 * a);

    //     cout << "complex roots are :\n";
    //     cout << "\nroot 1 : " << root1;
    //     cout << "\nroot 2 : " << root2;
    


}

    return 0;
}