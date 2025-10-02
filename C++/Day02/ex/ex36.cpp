#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int n,sum= INT_MIN,x;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++){
        if (arr[i] > sum){
            sum = arr[i];
            x = i;
        }
    }
    cout << x;
    return 0;
}