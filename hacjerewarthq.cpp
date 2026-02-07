#include <iostream>
using namespace std;
int main()
{
    int n, a[50]={0}, b;

    cin >> n;
    cout <<" the number of songs "<< n << endl;

    for (int i = 0; i < n; i++)
    {

        cin >> b;
        a[b]++;
    }

    for (int j = 0; j <= 50; j++)
    {
        cout << a[j];
    }

    return 0;
}