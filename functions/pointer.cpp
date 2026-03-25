#include<iostream>
using namespace std;
// void swap(int a, int b);
// void swap(int a, int b)
// {
// int temp=a;
// a=b;
// b=temp;
// cout<<a<<"\t"<<b<<endl;
// }
//reference veriable use '&' to make change the value in main too

 void swap(int *a, int *b);
void swap(int *a, int *b)
{
int temp=*a;
*a=*b;
*b=temp;
cout<<*a<<"\t"<<*b<<endl;
}

// void swap(int &r, int &r1);
// void swap(int &r, int &r1)
// {
// int temp=r;
// r=r1;
// r1=temp;
// cout<<r<<"\t"<<r1<<endl;
// }


int main()
{
int a=3,b=4;

cout<<a<<"\t"<<b<<endl;

swap(&a,&b);


cout<<a<<"\t"<<b<<endl;


    return 0;
}