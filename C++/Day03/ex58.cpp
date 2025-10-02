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
        if (x < 10 || x > 100){
            arr.pop_back();
        }
    }
    for (int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    cout << n-arr.size() << " " << sum;
    return 0;
}