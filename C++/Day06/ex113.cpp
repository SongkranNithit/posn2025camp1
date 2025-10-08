#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    vector<int> v(n);
    for (int i =0; i <n;i++){
        cin >> arr[i];
    }
    for (int i =0; i <n;i++){
        if (i == 0 || i == n-1){
            v[i] = arr[i];
            continue;
        } else {
            v[i] = arr[i-1] + arr[i] + arr[i+1];
        }
    }
    for (auto m : v){
        cout << m << " ";
    }
    return 0;
}