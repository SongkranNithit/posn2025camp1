#include <bits/stdc++.h>
using namespace std;

int main() {
    string eq;
    cin >> eq;
    size_t pos = eq.find_first_of("+-*/"); //หาพวกนี้ หาอันไหนเจอก็เอา index อันนั้น (debug krub)
    if (pos == string::npos) {
        cout << fixed << setprecision(2) << 0.0;
        return 0;
    }

    double left = stod(eq.substr(0, pos));
    double right = stod(eq.substr(pos+1));
    double result;

    if (eq[pos] == '+') result = left + right;
    else if (eq[pos] == '-') result = left - right;
    else if (eq[pos] == '*') result = left * right;
    else if (eq[pos] == '/') result = left / right;

    cout << fixed << setprecision(2) << result;
    return 0;
}
