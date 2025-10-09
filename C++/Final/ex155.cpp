#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    unordered_map<int,int> freq;
    int c = 0;

    for (int x : arr){
        int target = k - x;
        if (freq[target] > 0){
            c++;
            freq[target]--;
        } else {
            freq[x]++;
        }
    }

    cout << c;
    return 0;
}
