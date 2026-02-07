#include<iostream>
#include <cctype>
using namespace std;
int main()
{
char a;

cin>> a;

if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
{
   cout<<"it is a vowel";
}

else if(isdigit(a))
{
    cout<<"it is a digit";
} 

else
{
    cout<<"it is a conconant ";
}



    return 0;
}