#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    getline(cin, line); // read the whole line

    stringstream ss(line);
    vector<int> nums;
    int x;

    // parse all numbers into vector
    while (ss >> x) {
        nums.push_back(x);
    }

    int last = -1;

    while (!nums.empty()) {
        // find median
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        int median = sorted[nums.size() / 2]; // N is always odd

        // find index of median in current vector
        auto it = find(nums.begin(), nums.end(), median);
        int idx = distance(nums.begin(), it);

        last = nums[idx]; // store last removed number

        // find next index circularly
        int next_idx = (idx + 1) % nums.size();

        // remove median and next carefully
        if (next_idx > idx) {
            nums.erase(nums.begin() + next_idx);
            nums.erase(nums.begin() + idx);
        } else { // wrap-around case
            nums.erase(nums.begin() + idx);
            nums.erase(nums.begin() + next_idx);
        }
    }

    cout << last << endl;
    return 0;
}
