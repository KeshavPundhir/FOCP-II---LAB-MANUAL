#include<iostream>
using namespace std;

class Book 
{

string title;
string author;
double price;

public:
void inputDetails()
{
cout<<" Enter the TITLE : "; 
getline(cin, title);
cout<<" Enter the AUTHOR NAME : ";
getline(cin, author);
cout<<" Enter the PRICE : ";
cin>>price;
}
void displayDetails()
{
cout<<"\nTITLE : "<<title<<"\nAUTHOR NAME : "<<author<<"\nPRICE : "<<price;
}



};


int main()
{

Book b;

b.inputDetails();
b.displayDetails();

    return 0 ;
}