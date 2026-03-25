#include<iostream>
using namespace std;

//declaration 
void welcome(string="AGENT",string="");
//defination
void welcome(string first_n,string second_n)
{
cout<<"\n WELCOME "<<first_n<<"\t"<< second_n;

}

int main()
{

     welcome();
   welcome("paplu");
   welcome("paplu", "lal");
    return 0;
}