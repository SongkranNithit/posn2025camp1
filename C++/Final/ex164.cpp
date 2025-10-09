#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >>n;
    vector<int> height(n),leftmax(n),rightmax(n);
    for (int i = 0; i <n;i++){
        cin >> height[i];
    }
    leftmax[0] = height[0];
    for (int i = 1; i < n; i++){
        leftmax[i] = max(leftmax[i-1],height[i]);
    }
    rightmax[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--){
        rightmax[i] = max(rightmax[i+1],height[i]);
    }

    int total = 0;
    for (int i = 0; i < n; i++){
        total +=  max(0,min(leftmax[i],rightmax[i])- height[i]) ;
    }
    cout << total;
    return 0;
}