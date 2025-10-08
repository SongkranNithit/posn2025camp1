#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    set<int> num;
    for (int i =0 ;i < n ; i++){
        int x;
        cin >>x;
        num.insert(x);
    }
    int sum =0;
    for (auto m : num){
        sum += m;
    }
    cout << sum;
    return 0;
}