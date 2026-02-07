#include<iostream>
using namespace std;
int main()
{
int a;

cin>>a;

if (a%400==0)
{
    cout<<"!!!! LEAP YEAR !!!!";
}

else if (a%100==0)
{
    cout<<"!!!! NOT A LEAP YEAR !!!!";
}

else if (a%4==0)
{
    cout<<"!!!! LEAP YEAR !!!!";
}

else
{
     cout<<"!!!! NOT A LEAP YEAR !!!!";
}



    return 0;
}