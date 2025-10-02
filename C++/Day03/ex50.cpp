#include <bits/stdc++.h>
using namespace std;
#define long long int;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int n,max = 1,m=1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if ( i ==0) continue;
        if (arr[i] > arr[i-1]){
            m++;
            if (m > max) max = m;
        } else m = 1;
    }
    cout << max;
    return 0;
}