#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    vector<pair<char, int>> v(freq.begin(), freq.end());
    sort(v.begin(), v.end(), [](pair<char,int> a, pair<char,int> b) {
        if (a.second != b.second) return a.second > b.second;
        return a.first < b.first; 
    });

    string result;
    for (auto &p : v) {
        result += string(p.second, p.first); 
    }

    cout << result;
    return 0;

}