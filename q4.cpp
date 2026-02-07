#include <iostream>
int main()
{
    float a, b, c, totala,totalb;

    std::cout << "enter the item number  " << std::endl;

    std::cin >> a;

    std::cout << "enter the quantity  " << std::endl;

    std::cin >> b;

    std::cout << "enter the units number " << std::endl;

    std::cin >> c;

    totala= (b*c);

totalb= (b*c)*0.8;

    std::cout << "the price before discount  is " << totala << std::endl;

    std::cout << "the price before discount  is " << totalb << std::endl;

    return 0;
}