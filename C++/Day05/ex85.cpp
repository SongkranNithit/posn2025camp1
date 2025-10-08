#include <bits/stdc++.h>
using namespace std;

int mindel(string s, int i, int j) {
    if (i >= j) return 0;
    if (s[i] == s[j]) return mindel(s, i+1, j-1);
    return 1 + min(mindel(s, i+1, j), mindel(s, i, j-1));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int a = s.length();
    cout << "Minimum Deletions: "<< mindel(s, 0, s.size()-1) << endl;
    cout << "Length of Palindromic: " << a-mindel(s, 0, s.size()-1);
    return 0;
}
