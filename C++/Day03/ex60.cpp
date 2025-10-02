#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,x,sum=0;
    cin >>n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        cin >>x;
        arr.push_back(x);
        sum += x;
    }
    cout << sum;
    return 0;
}