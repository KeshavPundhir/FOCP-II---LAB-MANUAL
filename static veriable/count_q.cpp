#include <iostream>
using namespace std;

class rectangle
{
    int length;
    int width;
    static int count; // first static veriable and it's default value is ' 0 '

public:
    rectangle()
    {
        length = 0;
        width = 0;
        count++;
    }

    rectangle(int l, int w)
    {

        length = l;
        width = w;
        count++;
    }

    void display()
    {
        cout << "length = " << length << endl;
        cout << "width = " << width << endl;
        cout << "the count is : " << count << endl;
    }

    friend void area(rectangle obj); // friend is not he member of inheritance but a guest who can access some methods
};

int rectangle ::count = 0; // here we assign the value to the static veriable and ve can assign it some value

void area(rectangle obj)
{
    cout << "\narea = " << obj.length * obj.width << endl;
}

int main()
{
    // rectangle r1, r2(2, 3);// here first count increase then display because we call both obj together 

    // r1.display();
    // cout << endl;
    // r2.display();

    rectangle r1;// here we will see the gradual increase in count 
    r1.display();
     cout << endl;
    rectangle r2(2,3);
    r2.display();

    area(r2);

    return 0;
}
