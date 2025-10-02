#include <bits/stdc++.h>
using namespace std;

int main() {
    string text, forbid;
    getline(cin, text);
    getline(cin, forbid);

    string result = text;
    size_t pos = 0;
    while ((pos = result.find(forbid, pos)) != string::npos) {
        result.replace(pos, forbid.size(), string(forbid.size(), '*'));
        pos += forbid.size();
    }

    cout << result;
    return 0;
}
