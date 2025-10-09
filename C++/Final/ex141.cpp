#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> scores;

    for (int i = 0; i < n; i++) {
        int cmd;
        cin >> cmd;

        if (cmd == 1) {
            int num;
            cin >> num;
            scores.push_back(num);
        }
        else if (cmd == 2) {
            int num;
            cin >> num;
            auto it = find(scores.begin(), scores.end(), num);
            if (it != scores.end()) scores.erase(it);
        }
        else if (cmd == 3) {
            vector<int> temp = scores;
            sort(temp.begin(), temp.end(), greater<int>());
            for (int j = 0; j < temp.size(); j++) {
                cout << "Rank " << j + 1 << ": " << temp[j] << "\n";
            }
        }
    }
    return 0;
}
