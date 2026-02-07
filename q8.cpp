#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a % 3 == 0 && a % 5 == 0)
    {
        cout << " Hey you are both 'BUZZ' and 'FUZZ";
       
    }

    else if (a % 3 == 0)
    {
        cout << "Your tag is ' BUZZ '";
       
    }

    else if (a % 5 == 0)
    {
        cout << "Your tag is ' FUZZ '";
        
    }

    return 0;
}