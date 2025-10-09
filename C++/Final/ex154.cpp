#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,max=INT_MIN;
    cin >> n >> k;
    int arr[n];
    for (int i =0; i < n; i++){
        cin >> arr[i];
    }
    for (int i =0; i < n; i++){
        for (int j =i+1; j < n; j++){
            if (arr[i]+arr[j] > max && arr[i]+arr[j] <= k){
                max = arr[i]+arr[j];
            }
        }
    }
    if (max == INT_MIN) cout << "-1";
    else cout << max;
    return 0;
}