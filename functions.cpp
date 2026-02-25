#include <iostream>
using namespace std;

int sum(int, int);
int sum(int a, int b)   // we can use same veriable in all funjctions because " life of a veriable start with {} and ends with {} " 
{
    cout<<"\n int method ";
    return a + b;
}
float sum(float, float);
float sum(float a, float b)
{
   cout<<"\n float method ";
    return a + b;
}
double sum(double, double);
double sum(double a, double b) // every value with ". value " it's double value 
{
    cout<<"\n double method ";
    return a + b;
}

int main()
{

    cout << endl
         << sum(5, 10);
    cout << endl
         << sum(5.43f, 10.73f);// add 5.43"f" after the value to make it a float value otherwise it will be "doube" 
    cout << endl
         << sum(5.66478, 10.54756);

    return 0;
}