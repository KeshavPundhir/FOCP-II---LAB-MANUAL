#include<iostream>
#include<string>
using namespace std;
int main()
{
    int b;
string a;
cout<<"ENTER THE NUMBERS "<<endl;
getline(cin, a);
cout<<"ENTER REPEATATIONS "<<endl;
cin>>b;

for (int i = 0; i < b; i++)
{

    cout<<a<<endl;
}


    return 0;
}