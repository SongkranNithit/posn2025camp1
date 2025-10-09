#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >>n;
    bool c = false;
    int dp[n] = {0};
    dp[6] = 1;
    dp[9] = 1;
    dp[20] = 1;
    for (int i = 6; i <=n; i++){
        if (dp[i-6] == 1 || dp[i-9] == 1 || dp[i-20] == 1){
            dp[i] = 1;
            c = true;

        } else if (n == 6 || n == 9 || n == 20){
            c = true;
        }
    }
    if (!c) {
        cout << "no";
        return 0;
    }
    for (int i = 6; i <=n; i++){
        if (dp[i] == 1) cout << i << endl;
    }
    return 0;
}