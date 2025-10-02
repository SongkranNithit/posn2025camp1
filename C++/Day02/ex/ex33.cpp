#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int n,sum= INT_MAX;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i]  <= sum){
            sum = arr[i];
        }
    }
    cout << sum;
    return 0;
}