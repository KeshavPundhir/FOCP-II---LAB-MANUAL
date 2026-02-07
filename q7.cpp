#include<iostream>
using namespace std;

int main()
{
int a,b,c;

cin>> a;
cin>> b;
cin>> c;

if (a>b&&a>c)
{
   cout<<"A IS THE WINNER";
}

if (b>a&&b>c)
{
   cout<<"B IS THE WINNER";
}

if (c>a&&c>b)
{
   cout<<"C IS THE WINNER";
}

return 0;
}