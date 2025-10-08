#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    char* ptr = &s[0];
    for (int i = 0; i < s.size(); ++i) {
        ptr[i] = toupper(ptr[i]);
    }

    cout << s;
    return 0;
}
