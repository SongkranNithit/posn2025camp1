#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n; // odd number preferred

    for (int i = (n + 1) / 2; i >= -n; i--) {
        for (int j = -n; j <= n; j++) {
            int x = abs(j);

            // Top lobes
            if (i > 0 && (i + x >= (n + 1) / 2 && i + x <= n + 1)) {
                cout << "*";
            }
            // Bottom triangle
            else if (i <= 0 && x <= -i) {
                cout << "*";
            }
            else cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
