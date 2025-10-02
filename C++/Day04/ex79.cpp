#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string line;
    getline(cin,line);
    line.erase(remove_if(line.begin(), line.end(), ::isspace), line.end());
    for (char &c : line) {
        c = toupper(c);
    }
    string linereverse = line;
    reverse(linereverse.begin(), linereverse.end());
    if (line == linereverse) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
