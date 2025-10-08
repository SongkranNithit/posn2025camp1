#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<string> pals;
    bool found = false;


    for (int i = 0; i < n && !found; ++i) {
        for (int j = n - 1; j > i; --j) {
            if (s[i] == s[j]) {
                string mid = s.substr(i + 1, j - i - 1);
                for (char c : mid) {
                    string pal = string(1, s[i]) + c + string(1, s[j]);
                    pals.push_back(pal);
                }
                found = true;
                break;
            }
        }
    }

    int lps;
    if (pals.empty()) {
        lps = 1;
    } else {
        lps = 3;
    }
    int minDel = n - lps;
    
    cout << "Minimum Deletions: " << minDel << "\n";
    cout << "(LPS): " << lps << "\n";

    for (int i = 0; i < (int)pals.size(); ++i) {
        cout << "[" << i + 1 << "]: " << pals[i] << "\n";
    }

    return 0;
}
