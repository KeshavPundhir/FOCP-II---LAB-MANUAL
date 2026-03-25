#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, x = 0;
    cout << "Enter your number to check : " << endl;
    cin >> a;

    int b[a];
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            for (int j = 0; j < 1; j++)
            {
                b[j] = i;
                cout << "the divisors are : " << b[j] << endl;

                x += b[j];
            }
        }
    }

    if (x == a)
    {
        cout << "It is a perfect number " << endl;
    }
    else
    {
        cout << "Not a perfect number " << endl;
    
    }



    for (int i = 0; i < a; i++)
    {
        
    }
    
    

    return 0;
}