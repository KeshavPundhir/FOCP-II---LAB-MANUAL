#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{

    int digit = 0, word = 0, special = 0;
    string a;
    getline(cin, a);

    bool fail = true;

    for (int i = 0; i < a.length(); i++)
    {

        if (a[i] == ' ')
        {
            continue;
        }

        for (int j = 1; j < a.length(); j++)
        {
            a[0] = toupper(a[0]);
            a[j] = tolower(a[j]);
        }

        if (isdigit(a[i]))
        {
            digit++;
        }

        if (isalpha(a[i]))
        {
            word++;
        }

        if (!isalpha(a[i]) && !isdigit(a[i]))
        {
            special++;
        }

        if (a[i] == '!' || '@' || '#' || '$' || '%' || '&')
        {
            fail;
        }

        cout << a[i];
    }
    if (fail)
    {
        cout << "\n!!!! NOT VALID STATEMENT !!!!";
    }
    else
    {
        cout << " \n!!!!! VALID !!!!!";
    }

    cout << "\ntotal digits are " << digit << endl;
    cout << "total words are " << word << endl;
    cout << "total special ch are " << special << endl;

    return 0;
}