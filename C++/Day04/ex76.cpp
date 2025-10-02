#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string line;
    getline(cin, line);
    stringstream ss(line);

    double num, sum = 0;
    int count = 0;

    while (ss >> num) {
        sum += num;
        count++;
    }

    double avg = (count > 0) ? (sum / count) : 0.0;

    cout << fixed << setprecision(1) << sum << "\n";
    cout << count << "\n";
    cout << fixed << setprecision(1) << avg;

    return 0;
}
