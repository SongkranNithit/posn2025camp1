#include <bits/stdc++.h>
using namespace std;

bool check(char c) {
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main() {
    string s;
    getline(cin, s);
    char* ptr = &s[0];
    int c = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (check(ptr[i])) {
            c++;
        }
    }

    cout << c;
    return 0;
}
