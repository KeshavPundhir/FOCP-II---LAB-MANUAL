#include <iostream>
using namespace std;

int main()
{
    int i, p, amount, discount;
    cout << "enter no of items ";
    cin >> i;

    cout << "enter price ";
    cin >> p;

    amount = (i * p);
    discount = (amount * 0.90);

    if (i > 1000)
    {
        cout << "\nCONGRATS!!! you get 10% discount \n";
        cout << "Amount without discount " << amount;
        cout << "\nAmount to pay " << discount;
    }

    else
    {

        cout << "\nAmount to pay " << amount;
    }

    return 0;
}