#include <iostream>
using namespace std;
int main()
{
    int a, max;
    cout << "enter the number of entries : ";
    cin >> a;
    
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    max = arr[0];

    for (int i = 1; i < a; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "largest number is :  " << max << endl;

    return 0;
}