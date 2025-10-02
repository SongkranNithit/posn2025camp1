#include <bits/stdc++.h>
using namespace std;
#define long long int;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int n,sum,max = INT_MIN;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] > max){
            max = arr[i];
            sum = arr[i];
        }
    }
    cout <<sum;
    return 0;
}