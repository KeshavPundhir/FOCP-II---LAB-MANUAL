#include<iostream>
using namespace std;

class Temperature
{
 float celsius;

 float convertToFahrenheit()
 {
 return ( 	(celsius - 32)* 5/9);
 
 }

 public: 
 
void inputTemperature()
{
cout<<"Enter the temperature in celsius : ";
cin>>celsius;

}


void displayResult()
{

cout<<"Temperature in celsius : "<<convertToFahrenheit();
}







};


int main()
{

Temperature t;
t.inputTemperature();
t.displayResult();

    return 0;
}