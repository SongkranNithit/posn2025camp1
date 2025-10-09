#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k,cn=0,count=0,max=-1;
    cin >> n >> k;
    long long arr[n];
    for (int i =0; i < n;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n;i++){
        cn = 0;
        count = 0;

        for (int j = i; j <n;j++){
            count += arr[j];
            cn++;
            if (count > k) {
                count = 0;
                cn = 0;
            }
            if (cn > max) max = cn;
        }
    }
    cout << max;
    return 0;
}