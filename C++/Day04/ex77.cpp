#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string line;
    getline(cin, line);
    stringstream ss(line);
    string word;
    string acronym = "";
    while (ss >> word) {
        if (!word.empty() && isupper(word[0])) {
            acronym += word[0];
        }
    }

    cout << acronym;

    return 0;
}
