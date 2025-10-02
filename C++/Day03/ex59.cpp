#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,x,max=INT_MIN,min = INT_MAX,o=0,e=0;
    cin >>n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        cin >>x;
        if (x > 0){
            arr.push_back(x);
        }
        if (x >= max){
            max = x;
        }
        if (x <= min){
            min = x;
        }
        if (x % 2 == 0){
            e++;
        } else {
            o++;
        }
    }
    cout << e << "\n" << o << "\n" << max << "\n" << min << "\n";
    if (arr.empty()){
        cout << "NO POSITIVE";
    } else {
        for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    }
    return 0;
}