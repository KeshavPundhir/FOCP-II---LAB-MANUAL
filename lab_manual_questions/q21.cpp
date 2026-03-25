#include<iostream>
#include<string>
using namespace std;
int main()
{

string a;
cout<<"ENTER THE NUMBERS "<<endl;
getline(cin, a);


while (a.length()>0)
{
    cout<<a<<endl;
    a.resize(a.length()-1);
}





    return 0;
}