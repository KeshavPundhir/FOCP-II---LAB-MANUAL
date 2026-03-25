#include <iostream>
using namespace std;
int main()
{
    int a, b, arr[1000], c = 0;
    cout << "RANGE start from : ";

    cin >> a;
    cout << "TO : ";
    cin >> b;

    
    for (int i = a; i <= b; i++)
    {
        bool prime = true;// har number ko prime manega phir neeche check karne ko bhejega

        if (i <= 1)
        {
            prime = false;
        }
        for (int j = 2; j < i; j++)
        {

            if (i % j == 0)
            {
                prime = false;// agar false hai toh loop khatam 
                break;
            }
        }

        if (prime)
        {
            arr[c] = i; //agar true hai toh store karo value
            c++;
        }
    }

    for (int i = 0; i < c; i++)
    {
        cout << "prime numbers are " << arr[i] << endl;
    }

    return 0;
}