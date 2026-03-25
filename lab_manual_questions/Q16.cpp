#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the number to check : " << endl;

    cin >> a;

    if (a <= 1)
    {
        cout << "not a prime number" << endl;
    }

    for (int i = 2; i < a; i++)
    {

        if (a % i == 0)
        {
            cout << "not a prime number" << endl;break;
        }

        else
        {
            cout << "prime number"; break;
                }
    }

    return 0;
}