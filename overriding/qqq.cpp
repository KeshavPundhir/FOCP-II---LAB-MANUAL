#include <iostream>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    // check all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}