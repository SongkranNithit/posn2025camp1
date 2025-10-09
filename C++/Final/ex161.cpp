#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,c=0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i <n;i++) cin >> arr[i];
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (abs(arr[i] - arr[j]) <= k) c++;
        }
    }
    cout << c;
    return 0;
}