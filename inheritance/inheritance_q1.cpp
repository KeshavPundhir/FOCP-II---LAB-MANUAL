#include<iostream>
using namespace std;

class account

{
float balance; int account_no ;

public:
account()
{
    account_no = 0000;
    balance = 00000000;
}

account( int account_no,float balance )
{
(*this).account_no=account_no; (*this).balance=balance;
}


void displayAccount()
{
    cout<<"\n account no is : "<< account_no<<"\n balance is : "<< balance<<"\n";
}

};



class SavingsAccount :public account

{

float p,r,t,si;

public:

SavingsAccount()
{
p=0;r=0;t=0;
si =(p*r*t)/100;
}

SavingsAccount(int account_no,float balance ,float l,float m,float n):account( account_no, balance )
{

    
p=l;r=m;t=n;
si =(p*r*t)/100;

}

void calculateInterest()
{
displayAccount();
cout<<" total interest rate is : "<<si;
cout<<"\n";

}


};





int main ()
{

SavingsAccount a1,a2(1234567890,999000.00,10,5,7);



a1.displayAccount();
a2.displayAccount();
a1.calculateInterest();
a2.calculateInterest();
    return 0;
}
