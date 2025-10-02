#include <bits/stdc++.h>
using namespace std;
#define long long int;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int n,m,sum=0;
    cin >>m >>  n;
    int arr[m][n];
    for (int i = 0; i < m; i++){
         for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            sum += arr[i][j];
    }
    }
    cout << sum;
    return 0;
}