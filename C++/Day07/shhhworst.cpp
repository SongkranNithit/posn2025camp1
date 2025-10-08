#include <bits/stdc++.h>
using namespace std;

int knapsack(int i, int n, int W, vector<int>& val, vector<int>& wt) {
    if (i == n || W == 0) return 0;

    // If weight of current item is more than remaining capacity, skip it
    if (wt[i] > W) return knapsack(i + 1, n, W, val, wt);

    // Otherwise, choose max of including or excluding this item
    int include = val[i] + knapsack(i + 1, n, W - wt[i], val, wt);
    int exclude = knapsack(i + 1, n, W, val, wt);
    return max(include, exclude);
}

int main() {
    int n, W;
    cin >> n >> W;
    vector<int> val(n), wt(n);
    for (int i = 0; i < n; i++)
        cin >> val[i] >> wt[i];

    cout << knapsack(0, n, W, val, wt);
}
