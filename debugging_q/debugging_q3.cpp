#include <bits/stdc++.h>
using namespace std;

const int MAX = 100005;

int r[MAX], c[MAX];
int dr[MAX], dc[MAX];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> r[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    dr[0] = 0;
    dc[0] = 0;

    for (int i = 1; i < n; i++) {
        dr[i] = dr[i - 1];
        dc[i] = dc[i - 1];

        if (abs(r[i] - r[i - 1]) % 2 == 1)
            dr[i]++;

        if (abs(c[i] - c[i - 1]) % 2 == 1)
            dc[i]++;
    }

    int q;
    cin >> q;

    while (q--) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        r1--; c1--; r2--; c2--;

        if ((r[r1] + c[r1]) % 2 != (r[r2] + c[r2]) % 2) {
            cout << "NO\n";
            continue;
        }

        int rowDiff = abs(dr[r2] - dr[r1]);
        int colDiff = abs(dc[r2] - dc[r1]);

        if ((rowDiff - colDiff) % 2 == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}