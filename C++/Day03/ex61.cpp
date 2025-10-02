#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,x,sum=0;
    cin >>n;
    string arr[n];
    bool arr1[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i] >> arr1[i];
        if (arr[i] == "C"){
            if (arr1[i]){
                sum += 5;
            } else sum -= 2;
        } else if (arr[i] == "D"){
            if (arr1[i]){
                sum += 10;
            }
        } else if (arr[i] == "B" && sum >= 20 && arr1[i]){
            sum += 15;
        }
    }

    cout << sum;
    return 0;
}