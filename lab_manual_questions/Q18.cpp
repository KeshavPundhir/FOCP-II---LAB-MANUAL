#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main()
{

int a,og,rev=0;
cout<<"Enter the number to check : "<<endl;
cin>>a;

og=a;

while (a!=0)
{
    int last_digit= a%10; // remainder hai yeh!! given value ka last digit i.ei a= 123 so digit = 3
    rev= rev*10+last_digit; // yaha ki 
    a=a/10; // yaha a ki value me se last digit hath rahi hai if a = 0 loop stop working
}


if(rev == og)

    cout<<"Palindrome";
else
    cout<<"Not palindrome";




// using "  reverse (string.begin() , string.end()) " to reverse a string


// string a;
// cout<<"Enter the id you want to check : "<<endl;
// cin>>a;

// string b=a;
// reverse(b.begin(),b.end());

// if (a==b)
// {
//     cout<<" Palindrome hai guru ";
// }

// else{
//      cout<<" chall nikal bey!!! ";
// }






//     // this is to how to make a palindrome 


// int n[10];

// cout<<"Enter the number to check : "<<endl;

// for (int i = 0; i < 10; i++)
// {
//     cin>>n[i];
    
// }

// cout<<"The reversed value are : "<<endl;

// for (int i = 9; i >=0; i--)
// {
   
//    cout<<n[i]; 
// }



    return 0;
}