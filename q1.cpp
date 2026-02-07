#include <iostream>
int main()
{
    float a, b, c, result;

    std::cout << "the a marks is all 3 numbers " << std::endl;

    std::cin >> a >> b >> c;

    result = (a + b + c) / 3;
    std::cout << "the average  is " << result << std::endl;

    return 0;
}