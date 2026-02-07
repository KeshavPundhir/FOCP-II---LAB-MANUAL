#include <iostream>
using namespace std;

void swapUsingTemp(int a, int b) {
    int t = a;
    a = b;
    b = t;
    cout << a << " sweep " << b << endl;
}

void swapWithoutTemp(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " sweep " << b << endl;
}


int main() {

    int x, y;
    cin >> x >> y;
    swapUsingTemp(x, y);
    swapWithoutTemp(x, y);
   
    return 0;
}
