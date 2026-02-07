#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double basic, bonus, net;
        cin >> basic;
        bonus = basic * 0.12;
        net = basic + bonus;
        cout << "the salary "<< bonus << "/n " << net << endl;
    }

    return 0;
}
