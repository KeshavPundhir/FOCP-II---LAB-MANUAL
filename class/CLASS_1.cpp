#include <iostream>
using namespace std;
class Rectangle
{

    float length, width;

    float calculateArea()
    {
        return (length * width);
    }

    float calculatePerimeter()
    {
        return (2 * (length + width));
    }

public:
    void inputDimensions()
    {
        cout << "enter the length and width : ";
        cin >> length >> width;
    }

    void displayResult()
    {
        cout << "\n Area of rectangle : " << calculateArea() << "\n perimeter of rectangle : " << calculatePerimeter();
    }
};

int main()
{
    
    Rectangle r;

    r.inputDimensions();
    r.displayResult();

    return 0;
}