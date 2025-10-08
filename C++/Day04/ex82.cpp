#include <bits/stdc++.h>
using namespace std;

int toint(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    return 0;
}

int main() {
    string s,result;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '%' && i + 2 < s.size()) {
            int val = toint(s[i+1]) * 16 + toint(s[i+2]);
            result += char(val);
            i += 2;
        } else {
            result += s[i];
        }
    }

    cout << result;
}
