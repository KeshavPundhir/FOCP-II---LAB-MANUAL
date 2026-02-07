#include <iostream>
int main()
{
    float a, result;

    std::cout << "enter the value to convert Fahrenheit (F) to Celsius (C)  " << std::endl;

    std::cin >> a ;

    result =  (a - 32) * 5/9;
    std::cout << "the Celsius (C) value  is " << result << std::endl;

    return 0;
}